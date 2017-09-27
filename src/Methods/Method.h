//
// Created by Дмитрий on 25.09.2017.
//

#ifndef PROGOPTMET_METHOD_H
#define PROGOPTMET_METHOD_H

#include "string"
#include "../Parameters/Params.h"
#include "assert.h"
#include "math.h"

class Method {
public:
    // имя метода
    std::string name = "Name Method";
    /**
     * запуск метода на исполнение
     * @param params
     * @return
     */
    virtual int run(Params &params) = 0;

    /**
     * Получение метода по имени
     * @param name
     * @return
     */
    virtual Method *getMethodByName(std::string name) {
        return nullptr;
    }

    /**
     * Добавление метода в компановщик
     * @param method
     */
    virtual void addMethod(Method* method) {
        assert(false);
    }

    /**
     *
     */
    virtual ~Method() {}
};


#endif //PROGOPTMET_METHOD_H