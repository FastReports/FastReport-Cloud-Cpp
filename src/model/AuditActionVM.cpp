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



#include "CppRestOpenAPIClient/model/AuditActionVM.h"

namespace fastreport {
namespace cloud {
namespace models {



AuditActionVM::AuditActionVM()
{
    m_userId = utility::conversions::to_string_t("");
    m_userIdIsSet = false;
    m_entityId = utility::conversions::to_string_t("");
    m_entityIdIsSet = false;
    m_subscriptionId = utility::conversions::to_string_t("");
    m_subscriptionIdIsSet = false;
    m_typeIsSet = false;
    m_id = utility::conversions::to_string_t("");
    m_idIsSet = false;
    m_createdTime = utility::datetime();
    m_createdTimeIsSet = false;
    m_creatorUserId = utility::conversions::to_string_t("");
    m_creatorUserIdIsSet = false;
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_adminAction = false;
    m_adminActionIsSet = false;
}

AuditActionVM::~AuditActionVM()
{
}

void AuditActionVM::validate()
{
    // TODO: implement validation
}

web::json::value AuditActionVM::toJson() const
{
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_userIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_userId);
    }
    if(m_entityIdIsSet)
    {
        val[utility::conversions::to_string_t(U("entityId"))] = ModelBase::toJson(m_entityId);
    }
    if(m_subscriptionIdIsSet)
    {
        val[utility::conversions::to_string_t(U("subscriptionId"))] = ModelBase::toJson(m_subscriptionId);
    }
    if(m_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_type);
    }
    if(m_idIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_id);
    }
    if(m_createdTimeIsSet)
    {
        val[utility::conversions::to_string_t(U("createdTime"))] = ModelBase::toJson(m_createdTime);
    }
    if(m_creatorUserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("creatorUserId"))] = ModelBase::toJson(m_creatorUserId);
    }
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_name);
    }
    if(m_adminActionIsSet)
    {
        val[utility::conversions::to_string_t(U("adminAction"))] = ModelBase::toJson(m_adminAction);
    }

    return val;
}

bool AuditActionVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("userId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUserId);
            setUserId(refVal_setUserId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("entityId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("entityId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEntityId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEntityId);
            setEntityId(refVal_setEntityId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("subscriptionId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("subscriptionId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSubscriptionId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSubscriptionId);
            setSubscriptionId(refVal_setSubscriptionId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("type")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<AuditType> refVal_setType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setType);
            setType(refVal_setType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("createdTime"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("createdTime")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setCreatedTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedTime);
            setCreatedTime(refVal_setCreatedTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("creatorUserId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("creatorUserId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCreatorUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatorUserId);
            setCreatorUserId(refVal_setCreatorUserId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("adminAction"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("adminAction")));
        if(!fieldValue.is_null())
        {
            bool refVal_setAdminAction;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAdminAction);
            setAdminAction(refVal_setAdminAction);
        }
    }
    return ok;
}

void AuditActionVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_userIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_userId));
    }
    if(m_entityIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("entityId")), m_entityId));
    }
    if(m_subscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptionId")), m_subscriptionId));
    }
    if(m_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_type));
    }
    if(m_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_id));
    }
    if(m_createdTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdTime")), m_createdTime));
    }
    if(m_creatorUserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("creatorUserId")), m_creatorUserId));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_adminActionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("adminAction")), m_adminAction));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool AuditActionVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("userId"))))
    {
        utility::string_t refVal_setUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userId"))), refVal_setUserId );
        setUserId(refVal_setUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("entityId"))))
    {
        utility::string_t refVal_setEntityId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("entityId"))), refVal_setEntityId );
        setEntityId(refVal_setEntityId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subscriptionId"))))
    {
        utility::string_t refVal_setSubscriptionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subscriptionId"))), refVal_setSubscriptionId );
        setSubscriptionId(refVal_setSubscriptionId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        std::shared_ptr<AuditType> refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdTime"))))
    {
        utility::datetime refVal_setCreatedTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdTime"))), refVal_setCreatedTime );
        setCreatedTime(refVal_setCreatedTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("creatorUserId"))))
    {
        utility::string_t refVal_setCreatorUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("creatorUserId"))), refVal_setCreatorUserId );
        setCreatorUserId(refVal_setCreatorUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("adminAction"))))
    {
        bool refVal_setAdminAction;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("adminAction"))), refVal_setAdminAction );
        setAdminAction(refVal_setAdminAction);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

utility::string_t AuditActionVM::getUserId() const
{
    return m_userId;
}

void AuditActionVM::setUserId(const utility::string_t& value)
{
    m_userId = value;
    m_userIdIsSet = true;
}

bool AuditActionVM::userIdIsSet() const
{
    return m_userIdIsSet;
}

void AuditActionVM::unsetuserId()
{
    m_userIdIsSet = false;
}
utility::string_t AuditActionVM::getEntityId() const
{
    return m_entityId;
}

void AuditActionVM::setEntityId(const utility::string_t& value)
{
    m_entityId = value;
    m_entityIdIsSet = true;
}

bool AuditActionVM::entityIdIsSet() const
{
    return m_entityIdIsSet;
}

void AuditActionVM::unsetentityId()
{
    m_entityIdIsSet = false;
}
utility::string_t AuditActionVM::getSubscriptionId() const
{
    return m_subscriptionId;
}

void AuditActionVM::setSubscriptionId(const utility::string_t& value)
{
    m_subscriptionId = value;
    m_subscriptionIdIsSet = true;
}

bool AuditActionVM::subscriptionIdIsSet() const
{
    return m_subscriptionIdIsSet;
}

void AuditActionVM::unsetsubscriptionId()
{
    m_subscriptionIdIsSet = false;
}
std::shared_ptr<AuditType> AuditActionVM::getType() const
{
    return m_type;
}

void AuditActionVM::setType(const std::shared_ptr<AuditType>& value)
{
    m_type = value;
    m_typeIsSet = true;
}

bool AuditActionVM::typeIsSet() const
{
    return m_typeIsSet;
}

void AuditActionVM::unsettype()
{
    m_typeIsSet = false;
}
utility::string_t AuditActionVM::getId() const
{
    return m_id;
}

void AuditActionVM::setId(const utility::string_t& value)
{
    m_id = value;
    m_idIsSet = true;
}

bool AuditActionVM::idIsSet() const
{
    return m_idIsSet;
}

void AuditActionVM::unsetid()
{
    m_idIsSet = false;
}
utility::datetime AuditActionVM::getCreatedTime() const
{
    return m_createdTime;
}

void AuditActionVM::setCreatedTime(const utility::datetime& value)
{
    m_createdTime = value;
    m_createdTimeIsSet = true;
}

bool AuditActionVM::createdTimeIsSet() const
{
    return m_createdTimeIsSet;
}

void AuditActionVM::unsetcreatedTime()
{
    m_createdTimeIsSet = false;
}
utility::string_t AuditActionVM::getCreatorUserId() const
{
    return m_creatorUserId;
}

void AuditActionVM::setCreatorUserId(const utility::string_t& value)
{
    m_creatorUserId = value;
    m_creatorUserIdIsSet = true;
}

bool AuditActionVM::creatorUserIdIsSet() const
{
    return m_creatorUserIdIsSet;
}

void AuditActionVM::unsetcreatorUserId()
{
    m_creatorUserIdIsSet = false;
}
utility::string_t AuditActionVM::getName() const
{
    return m_name;
}

void AuditActionVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool AuditActionVM::nameIsSet() const
{
    return m_nameIsSet;
}

void AuditActionVM::unsetname()
{
    m_nameIsSet = false;
}
bool AuditActionVM::isAdminAction() const
{
    return m_adminAction;
}

void AuditActionVM::setAdminAction(bool value)
{
    m_adminAction = value;
    m_adminActionIsSet = true;
}

bool AuditActionVM::adminActionIsSet() const
{
    return m_adminActionIsSet;
}

void AuditActionVM::unsetadminAction()
{
    m_adminActionIsSet = false;
}
}
}
}


