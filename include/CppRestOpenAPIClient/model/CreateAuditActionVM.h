/**
 * FastReport Cloud
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CreateAuditActionVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_CreateAuditActionVM_H_
#define FASTREPORT_CLOUD_MODELS_CreateAuditActionVM_H_


#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/CloudBaseVM.h"
#include "CppRestOpenAPIClient/model/AuditType.h"

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  CreateAuditActionVM
    : public CloudBaseVM
{
public:
    CreateAuditActionVM();
    virtual ~CreateAuditActionVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateAuditActionVM members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();

    void setUserId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEntityId() const;
    bool entityIdIsSet() const;
    void unsetentityId();

    void setEntityId(const utility::string_t& value);

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
    std::shared_ptr<AuditType> getType() const;
    bool typeIsSet() const;
    void unsettype();

    void setType(const std::shared_ptr<AuditType>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessageId() const;
    bool messageIdIsSet() const;
    void unsetmessageId();

    void setMessageId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();

    void setFileName(const utility::string_t& value);


protected:
    utility::string_t m_userId;
    bool m_userIdIsSet;
    utility::string_t m_entityId;
    bool m_entityIdIsSet;
    utility::string_t m_subscriptionId;
    bool m_subscriptionIdIsSet;
    std::shared_ptr<AuditType> m_type;
    bool m_typeIsSet;
    utility::string_t m_messageId;
    bool m_messageIdIsSet;
    utility::string_t m_fileName;
    bool m_fileNameIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_CreateAuditActionVM_H_ */
