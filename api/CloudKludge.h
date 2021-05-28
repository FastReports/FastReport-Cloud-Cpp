#pragma once
#include <cstdint>

#ifndef FASTREPORT_CLOUD_KLUDGE_H_
#define FASTREPORT_CLOUD_KLUDGE_H_

namespace fastreport {
        namespace cloud {
                namespace models {

                        struct DefaultEnum {
                                int32_t _0;
                        };

                        extern DefaultEnum TypeEnum;
                        extern DefaultEnum LevelEnum;
                        extern DefaultEnum CreateEnum;
                        extern DefaultEnum R_deleteEnum;
                        extern DefaultEnum ExecuteEnum;
                        extern DefaultEnum GetEnum;
                        extern DefaultEnum UpdateEnum;
                        extern DefaultEnum AdministrateEnum;
                }
        }
}

#endif /* FASTREPORT_CLOUD_KLUDGE_H_ */
