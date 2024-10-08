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



#include "CppRestOpenAPIClient/model/CreateGroupAdminVM.h"

namespace fastreport {
namespace cloud {
namespace models {



CreateGroupAdminVM::CreateGroupAdminVM()
{
    m_ownerId = utility::conversions::to_string_t("");
    m_ownerIdIsSet = false;
}

CreateGroupAdminVM::~CreateGroupAdminVM()
{
}

void CreateGroupAdminVM::validate()
{
    // TODO: implement validation
}

web::json::value CreateGroupAdminVM::toJson() const
{
    web::json::value val = this->CreateGroupVM::toJson();
    
    if(m_ownerIdIsSet)
    {
        val[utility::conversions::to_string_t(U("ownerId"))] = ModelBase::toJson(m_ownerId);
    }

    return val;
}

bool CreateGroupAdminVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CreateGroupVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("ownerId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ownerId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setOwnerId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOwnerId);
            setOwnerId(refVal_setOwnerId);
        }
    }
    return ok;
}

void CreateGroupAdminVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ownerIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ownerId")), m_ownerId));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_subscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptionId")), m_subscriptionId));
    }
}

bool CreateGroupAdminVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("ownerId"))))
    {
        utility::string_t refVal_setOwnerId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ownerId"))), refVal_setOwnerId );
        setOwnerId(refVal_setOwnerId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subscriptionId"))))
    {
        utility::string_t refVal_setSubscriptionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subscriptionId"))), refVal_setSubscriptionId );
        setSubscriptionId(refVal_setSubscriptionId);
    }
    return ok;
}

utility::string_t CreateGroupAdminVM::getOwnerId() const
{
    return m_ownerId;
}

void CreateGroupAdminVM::setOwnerId(const utility::string_t& value)
{
    m_ownerId = value;
    m_ownerIdIsSet = true;
}

bool CreateGroupAdminVM::ownerIdIsSet() const
{
    return m_ownerIdIsSet;
}

void CreateGroupAdminVM::unsetownerId()
{
    m_ownerIdIsSet = false;
}
}
}
}


