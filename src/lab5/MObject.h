#pragma once
#include <iostream>
#include <string>

class MObject {
public:
    
    std::string description;

    MObject(const std::string& desc = "") : description(desc) { describe(); }

    void describe() {
        std::cout << description << std::endl;
    }

    ~MObject() {
        // Если голова — удаляем всю цепочку
        if (this == head) {
            MObject* current = this;
            while (current) {
                MObject* toDelete = current;
                current = current->next;
                toDelete->next = 0;
                if (toDelete != this) {
                    delete toDelete;
                }
            }
            head = 0;
        }
        // Если не голова то меняем указатели
        else if (head) {
            MObject* prev = nullptr;
            MObject* current = head;
            while (current && current != this) {
                prev = current;
                current = current->next;
            }
            if (current == this && prev) {
                prev->next = this->next;
                this->next = nullptr;
            }
        }
    }

    static MObject* head;
    MObject* next;

    static void add(MObject* obj) {
        obj->next = head;
        head = obj;
    }

    static void describeAll() {
        MObject* current = head;
        while (current) {
            current->describe();
            current = current->next;
        }
    }
};