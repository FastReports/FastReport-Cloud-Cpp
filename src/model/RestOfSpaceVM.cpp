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



#include "CppRestOpenAPIClient/model/RestOfSpaceVM.h"

namespace fastreport {
namespace cloud {
namespace models {



RestOfSpaceVM::RestOfSpaceVM()
{
    m_restOfSpace = 0L;
    m_restOfSpaceIsSet = false;
    m_subscriptionPlanIsSet = false;
}

RestOfSpaceVM::~RestOfSpaceVM()
{
}

void RestOfSpaceVM::validate()
{
    // TODO: implement validation
}

web::json::value RestOfSpaceVM::toJson() const
{
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_restOfSpaceIsSet)
    {
        val[utility::conversions::to_string_t(U("restOfSpace"))] = ModelBase::toJson(m_restOfSpace);
    }
    if(m_subscriptionPlanIsSet)
    {
        val[utility::conversions::to_string_t(U("subscriptionPlan"))] = ModelBase::toJson(m_subscriptionPlan);
    }

    return val;
}

bool RestOfSpaceVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("restOfSpace"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("restOfSpace")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setRestOfSpace;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRestOfSpace);
            setRestOfSpace(refVal_setRestOfSpace);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("subscriptionPlan"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("subscriptionPlan")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SubscriptionPlanVM> refVal_setSubscriptionPlan;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSubscriptionPlan);
            setSubscriptionPlan(refVal_setSubscriptionPlan);
        }
    }
    return ok;
}

void RestOfSpaceVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_restOfSpaceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("restOfSpace")), m_restOfSpace));
    }
    if(m_subscriptionPlanIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptionPlan")), m_subscriptionPlan));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool RestOfSpaceVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("restOfSpace"))))
    {
        int64_t refVal_setRestOfSpace;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("restOfSpace"))), refVal_setRestOfSpace );
        setRestOfSpace(refVal_setRestOfSpace);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subscriptionPlan"))))
    {
        std::shared_ptr<SubscriptionPlanVM> refVal_setSubscriptionPlan;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subscriptionPlan"))), refVal_setSubscriptionPlan );
        setSubscriptionPlan(refVal_setSubscriptionPlan);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

int64_t RestOfSpaceVM::getRestOfSpace() const
{
    return m_restOfSpace;
}

void RestOfSpaceVM::setRestOfSpace(int64_t value)
{
    m_restOfSpace = value;
    m_restOfSpaceIsSet = true;
}

bool RestOfSpaceVM::restOfSpaceIsSet() const
{
    return m_restOfSpaceIsSet;
}

void RestOfSpaceVM::unsetrestOfSpace()
{
    m_restOfSpaceIsSet = false;
}
std::shared_ptr<SubscriptionPlanVM> RestOfSpaceVM::getSubscriptionPlan() const
{
    return m_subscriptionPlan;
}

void RestOfSpaceVM::setSubscriptionPlan(const std::shared_ptr<SubscriptionPlanVM>& value)
{
    m_subscriptionPlan = value;
    m_subscriptionPlanIsSet = true;
}

bool RestOfSpaceVM::subscriptionPlanIsSet() const
{
    return m_subscriptionPlanIsSet;
}

void RestOfSpaceVM::unsetsubscriptionPlan()
{
    m_subscriptionPlanIsSet = false;
}
}
}
}

