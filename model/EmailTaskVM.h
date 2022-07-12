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
 * EmailTaskVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_EmailTaskVM_H_
#define FASTREPORT_CLOUD_MODELS_EmailTaskVM_H_

#include "CloudKludge.h"
#include "../ModelBase.h"

#include "TaskType.h"
#include "TransportTaskBaseVM.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  EmailTaskVM
    : public ModelBase
{
public:
    EmailTaskVM();
    virtual ~EmailTaskVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// EmailTaskVM members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBody() const;
    bool bodyIsSet() const;
    void unsetbody();

    void setBody(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isIsBodyHtml() const;
    bool isBodyHtmlIsSet() const;
    void unsetisBodyHtml();

    void setIsBodyHtml(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();

    void setSubject(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getTo();
    bool toIsSet() const;
    void unsetto();

    void setTo(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFrom() const;
    bool fromIsSet() const;
    void unsetfrom();

    void setFrom(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();

    void setUsername(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getServer() const;
    bool serverIsSet() const;
    void unsetserver();

    void setServer(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();

    void setPort(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    bool isEnableSsl() const;
    bool enableSslIsSet() const;
    void unsetenableSsl();

    void setEnableSsl(bool value);

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
    utility::string_t m_body;
    bool m_bodyIsSet;
    bool m_isBodyHtml;
    bool m_isBodyHtmlIsSet;
    utility::string_t m_subject;
    bool m_subjectIsSet;
    std::vector<utility::string_t> m_to;
    bool m_toIsSet;
    utility::string_t m_from;
    bool m_fromIsSet;
    utility::string_t m_username;
    bool m_usernameIsSet;
    utility::string_t m_server;
    bool m_serverIsSet;
    int32_t m_port;
    bool m_portIsSet;
    bool m_enableSsl;
    bool m_enableSslIsSet;
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

#endif /* FASTREPORT_CLOUD_MODELS_EmailTaskVM_H_ */
