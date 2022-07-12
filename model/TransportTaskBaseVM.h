/**
 * FastReport Cloud
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * TransportTaskBaseVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_TransportTaskBaseVM_H_
#define FASTREPORT_CLOUD_MODELS_TransportTaskBaseVM_H_

#include "CloudKludge.h"
#include "../ModelBase.h"

#include "TaskBaseVM.h"
#include "TaskType.h"
#include <cpprest/details/basic_types.h>
#include <vector>
#include "InputFileVM.h"

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  TransportTaskBaseVM
    : public ModelBase
{
public:
    TransportTaskBaseVM();
    virtual ~TransportTaskBaseVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TransportTaskBaseVM members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<InputFileVM>>& getFiles();
    bool filesIsSet() const;
    void unsetfiles();

    void setFiles(const std::vector<std::shared_ptr<InputFileVM>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetname();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSubscriptionId() const;
    bool subscriptionIdIsSet() const;
    void unsetsubscriptionId();

    void setSubscriptionId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<TaskType> getType() const;
    bool typeIsSet() const;
    void unsettype();

    void setType(const std::shared_ptr<TaskType>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getDelayedRunTime() const;
    bool delayedRunTimeIsSet() const;
    void unsetdelayedRunTime();

    void setDelayedRunTime(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCronExpression() const;
    bool cronExpressionIsSet() const;
    void unsetcronExpression();

    void setCronExpression(const utility::string_t& value);


protected:
    std::vector<std::shared_ptr<InputFileVM>> m_files;
    bool m_filesIsSet;
    utility::string_t m_name;
    bool m_nameIsSet;
    utility::string_t m_subscriptionId;
    bool m_subscriptionIdIsSet;
    std::shared_ptr<TaskType> m_type;
    bool m_typeIsSet;
    utility::datetime m_delayedRunTime;
    bool m_delayedRunTimeIsSet;
    utility::string_t m_cronExpression;
    bool m_cronExpressionIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_TransportTaskBaseVM_H_ */
