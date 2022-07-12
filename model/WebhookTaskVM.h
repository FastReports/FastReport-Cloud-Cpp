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
 * WebhookTaskVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_WebhookTaskVM_H_
#define FASTREPORT_CLOUD_MODELS_WebhookTaskVM_H_

#include "CloudKludge.h"
#include "../ModelBase.h"

#include "TaskType.h"
#include "TransportTaskBaseVM.h"
#include <cpprest/details/basic_types.h>
#include <vector>
#include "EndpointVM.h"

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  WebhookTaskVM
    : public ModelBase
{
public:
    WebhookTaskVM();
    virtual ~WebhookTaskVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// WebhookTaskVM members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<EndpointVM>>& getEndpoints();
    bool endpointsIsSet() const;
    void unsetendpoints();

    void setEndpoints(const std::vector<std::shared_ptr<EndpointVM>>& value);

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
    std::vector<std::shared_ptr<EndpointVM>> m_endpoints;
    bool m_endpointsIsSet;
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

#endif /* FASTREPORT_CLOUD_MODELS_WebhookTaskVM_H_ */
