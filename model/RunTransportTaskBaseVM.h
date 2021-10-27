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
 * RunTransportTaskBaseVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_RunTransportTaskBaseVM_H_
#define FASTREPORT_CLOUD_MODELS_RunTransportTaskBaseVM_H_

#include "CloudKludge.h"
#include "../ModelBase.h"

#include "RunTaskBaseVM.h"
#include "RunInputFileVM.h"
#include "TaskType.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  RunTransportTaskBaseVM
    : public ModelBase
{
public:
    RunTransportTaskBaseVM();
    virtual ~RunTransportTaskBaseVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RunTransportTaskBaseVM members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RunInputFileVM>>& getFiles();
    bool filesIsSet() const;
    void unsetfiles();

    void setFiles(const std::vector<std::shared_ptr<RunInputFileVM>>& value);

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


protected:
    std::vector<std::shared_ptr<RunInputFileVM>> m_files;
    bool m_filesIsSet;
    utility::string_t m_subscriptionId;
    bool m_subscriptionIdIsSet;
    std::shared_ptr<TaskType> m_type;
    bool m_typeIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_RunTransportTaskBaseVM_H_ */