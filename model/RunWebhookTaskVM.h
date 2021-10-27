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
 * RunWebhookTaskVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_RunWebhookTaskVM_H_
#define FASTREPORT_CLOUD_MODELS_RunWebhookTaskVM_H_

#include "CloudKludge.h"
#include "../ModelBase.h"

#include "TaskType.h"
#include "RunEndpointVM.h"
#include <cpprest/details/basic_types.h>
#include "RunTransportTaskBaseVM.h"
#include <vector>

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  RunWebhookTaskVM
    : public ModelBase
{
public:
    RunWebhookTaskVM();
    virtual ~RunWebhookTaskVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RunWebhookTaskVM members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RunEndpointVM>>& getEndpoints();
    bool endpointsIsSet() const;
    void unsetendpoints();

    void setEndpoints(const std::vector<std::shared_ptr<RunEndpointVM>>& value);

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
    std::vector<std::shared_ptr<RunEndpointVM>> m_endpoints;
    bool m_endpointsIsSet;
    utility::string_t m_subscriptionId;
    bool m_subscriptionIdIsSet;
    std::shared_ptr<TaskType> m_type;
    bool m_typeIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_RunWebhookTaskVM_H_ */
