/**
 * FastReport Cloud
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * TasksVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_TasksVM_H_
#define FASTREPORT_CLOUD_MODELS_TasksVM_H_

#include "CloudKludge.h"
#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/TaskBaseVM.h"
#include <vector>

namespace fastreport {
namespace cloud {
namespace models {

class TaskBaseVM;

/// <summary>
/// 
/// </summary>
class  TasksVM
    : public ModelBase
{
public:
    TasksVM();
    virtual ~TasksVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TasksVM members

    /// <summary>
    /// 
    /// </summary>
    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();

    void setCount(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getSkip() const;
    bool skipIsSet() const;
    void unsetskip();

    void setSkip(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getTake() const;
    bool takeIsSet() const;
    void unsettake();

    void setTake(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<TaskBaseVM>>& getTasks();
    bool tasksIsSet() const;
    void unsettasks();

    void setTasks(const std::vector<std::shared_ptr<TaskBaseVM>>& value);


protected:
    int64_t m_count;
    bool m_countIsSet;
    int32_t m_skip;
    bool m_skipIsSet;
    int32_t m_take;
    bool m_takeIsSet;
    std::vector<std::shared_ptr<TaskBaseVM>> m_tasks;
    bool m_tasksIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_TasksVM_H_ */