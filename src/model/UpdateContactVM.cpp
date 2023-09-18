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



#include "CppRestOpenAPIClient/model/UpdateContactVM.h"

namespace fastreport {
namespace cloud {
namespace models {



UpdateContactVM::UpdateContactVM()
{
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_email = utility::conversions::to_string_t("");
    m_emailIsSet = false;
    m_groupsIsSet = false;
    m_subscriptionId = utility::conversions::to_string_t("");
    m_subscriptionIdIsSet = false;
}

UpdateContactVM::~UpdateContactVM()
{
}

void UpdateContactVM::validate()
{
    // TODO: implement validation
}

web::json::value UpdateContactVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_name);
    }
    if(m_emailIsSet)
    {
        val[utility::conversions::to_string_t(U("email"))] = ModelBase::toJson(m_email);
    }
    if(m_groupsIsSet)
    {
        val[utility::conversions::to_string_t(U("groups"))] = ModelBase::toJson(m_groups);
    }
    if(m_subscriptionIdIsSet)
    {
        val[utility::conversions::to_string_t(U("subscriptionId"))] = ModelBase::toJson(m_subscriptionId);
    }

    return val;
}

bool UpdateContactVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t(U("email"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("email")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEmail;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEmail);
            setEmail(refVal_setEmail);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("groups"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("groups")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setGroups;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGroups);
            setGroups(refVal_setGroups);
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
    return ok;
}

void UpdateContactVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_emailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("email")), m_email));
    }
    if(m_groupsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("groups")), m_groups));
    }
    if(m_subscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptionId")), m_subscriptionId));
    }
}

bool UpdateContactVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("email"))))
    {
        utility::string_t refVal_setEmail;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("email"))), refVal_setEmail );
        setEmail(refVal_setEmail);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("groups"))))
    {
        std::vector<utility::string_t> refVal_setGroups;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("groups"))), refVal_setGroups );
        setGroups(refVal_setGroups);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subscriptionId"))))
    {
        utility::string_t refVal_setSubscriptionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subscriptionId"))), refVal_setSubscriptionId );
        setSubscriptionId(refVal_setSubscriptionId);
    }
    return ok;
}

utility::string_t UpdateContactVM::getName() const
{
    return m_name;
}

void UpdateContactVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool UpdateContactVM::nameIsSet() const
{
    return m_nameIsSet;
}

void UpdateContactVM::unsetname()
{
    m_nameIsSet = false;
}
utility::string_t UpdateContactVM::getEmail() const
{
    return m_email;
}

void UpdateContactVM::setEmail(const utility::string_t& value)
{
    m_email = value;
    m_emailIsSet = true;
}

bool UpdateContactVM::emailIsSet() const
{
    return m_emailIsSet;
}

void UpdateContactVM::unsetemail()
{
    m_emailIsSet = false;
}
std::vector<utility::string_t>& UpdateContactVM::getGroups()
{
    return m_groups;
}

void UpdateContactVM::setGroups(const std::vector<utility::string_t>& value)
{
    m_groups = value;
    m_groupsIsSet = true;
}

bool UpdateContactVM::groupsIsSet() const
{
    return m_groupsIsSet;
}

void UpdateContactVM::unsetgroups()
{
    m_groupsIsSet = false;
}
utility::string_t UpdateContactVM::getSubscriptionId() const
{
    return m_subscriptionId;
}

void UpdateContactVM::setSubscriptionId(const utility::string_t& value)
{
    m_subscriptionId = value;
    m_subscriptionIdIsSet = true;
}

bool UpdateContactVM::subscriptionIdIsSet() const
{
    return m_subscriptionIdIsSet;
}

void UpdateContactVM::unsetsubscriptionId()
{
    m_subscriptionIdIsSet = false;
}
}
}
}

