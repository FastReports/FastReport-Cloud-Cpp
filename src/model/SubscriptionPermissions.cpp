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



#include "CppRestOpenAPIClient/model/SubscriptionPermissions.h"

namespace fastreport {
namespace cloud {
namespace models {



SubscriptionPermissions::SubscriptionPermissions()
{
}

SubscriptionPermissions::~SubscriptionPermissions()
{
}

void SubscriptionPermissions::validate()
{
    // TODO: implement validation
}

web::json::value SubscriptionPermissions::toJson() const
{

    web::json::value val = web::json::value::object();
    

    return val;
}

bool SubscriptionPermissions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}

void SubscriptionPermissions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ownerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("owner")), m_owner));
    }
    if(m_groupsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("groups")), m_groups));
    }
    if(m_otherIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("other")), m_other));
    }
    if(m_anonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("anon")), m_anon));
    }
}

bool SubscriptionPermissions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("owner"))))
    {
        std::shared_ptr<SubscriptionPermission> refVal_setOwner;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("owner"))), refVal_setOwner );
        setOwner(refVal_setOwner);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("groups"))))
    {
        std::map<utility::string_t, std::shared_ptr<SubscriptionPermission>> refVal_setGroups;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("groups"))), refVal_setGroups );
        setGroups(refVal_setGroups);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("other"))))
    {
        std::shared_ptr<SubscriptionPermission> refVal_setOther;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("other"))), refVal_setOther );
        setOther(refVal_setOther);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("anon"))))
    {
        std::shared_ptr<SubscriptionPermission> refVal_setAnon;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("anon"))), refVal_setAnon );
        setAnon(refVal_setAnon);
    }
    return ok;
}

}
}
}


