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



#include "CreateSubscriptionPeriodVM.h"

namespace fastreport {
namespace cloud {
namespace models {




CreateSubscriptionPeriodVM::CreateSubscriptionPeriodVM()
{
    m_planId = utility::conversions::to_string_t("");
    m_planIdIsSet = false;
}

CreateSubscriptionPeriodVM::~CreateSubscriptionPeriodVM()
{
}

void CreateSubscriptionPeriodVM::validate()
{
    // TODO: implement validation
}

web::json::value CreateSubscriptionPeriodVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_planIdIsSet)
    {
        val[utility::conversions::to_string_t("planId")] = ModelBase::toJson(m_planId);
    }

    return val;
}

bool CreateSubscriptionPeriodVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("planId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("planId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_planId;
            ok &= ModelBase::fromJson(fieldValue, refVal_planId);
            setPlanId(refVal_planId);
        }
    }
    return ok;
}

void CreateSubscriptionPeriodVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_planIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("planId"), m_planId));
    }
}

bool CreateSubscriptionPeriodVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("planId")))
    {
        utility::string_t refVal_planId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("planId")), refVal_planId );
        setPlanId(refVal_planId);
    }
    return ok;
}

utility::string_t CreateSubscriptionPeriodVM::getPlanId() const
{
    return m_planId;
}

void CreateSubscriptionPeriodVM::setPlanId(const utility::string_t& value)
{
    m_planId = value;
    m_planIdIsSet = true;
}

bool CreateSubscriptionPeriodVM::planIdIsSet() const
{
    return m_planIdIsSet;
}

void CreateSubscriptionPeriodVM::unsetplanId()
{
    m_planIdIsSet = false;
}
}
}
}


