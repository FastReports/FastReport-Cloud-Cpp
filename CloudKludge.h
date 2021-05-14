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

			DefaultEnum TypeEnum;
			DefaultEnum LevelEnum;
			DefaultEnum CreateEnum;
			DefaultEnum R_deleteEnum;
			DefaultEnum ExecuteEnum;
			DefaultEnum GetEnum;
			DefaultEnum UpdateEnum;
			DefaultEnum AdministrateEnum;
		}
	}
}

#endif /* FASTREPORT_CLOUD_KLUDGE_H_ */
