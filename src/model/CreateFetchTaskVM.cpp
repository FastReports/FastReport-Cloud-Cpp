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



#include "CppRestOpenAPIClient/model/CreateFetchTaskVM.h"

namespace fastreport {
namespace cloud {
namespace models {



CreateFetchTaskVM::CreateFetchTaskVM()
{
    m_dataSourceId = utility::conversions::to_string_t("");
    m_dataSourceIdIsSet = false;
}

CreateFetchTaskVM::~CreateFetchTaskVM()
{
}

void CreateFetchTaskVM::validate()
{
    // TODO: implement validation
}

web::json::value CreateFetchTaskVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_dataSourceIdIsSet)
    {
        val[utility::conversions::to_string_t(U("dataSourceId"))] = ModelBase::toJson(m_dataSourceId);
    }

    return val;
}

bool CreateFetchTaskVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("dataSourceId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("dataSourceId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDataSourceId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDataSourceId);
            setDataSourceId(refVal_setDataSourceId);
        }
    }
    return ok;
}

void CreateFetchTaskVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_dataSourceIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("dataSourceId")), m_dataSourceId));
    }
    if(m_cronExpressionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cronExpression")), m_cronExpression));
    }
    if(m_delayedRunTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("delayedRunTime")), m_delayedRunTime));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_subscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptionId")), m_subscriptionId));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool CreateFetchTaskVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("dataSourceId"))))
    {
        utility::string_t refVal_setDataSourceId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("dataSourceId"))), refVal_setDataSourceId );
        setDataSourceId(refVal_setDataSourceId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cronExpression"))))
    {
        utility::string_t refVal_setCronExpression;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cronExpression"))), refVal_setCronExpression );
        setCronExpression(refVal_setCronExpression);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("delayedRunTime"))))
    {
        utility::datetime refVal_setDelayedRunTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("delayedRunTime"))), refVal_setDelayedRunTime );
        setDelayedRunTime(refVal_setDelayedRunTime);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

utility::string_t CreateFetchTaskVM::getDataSourceId() const
{
    return m_dataSourceId;
}

void CreateFetchTaskVM::setDataSourceId(const utility::string_t& value)
{
    m_dataSourceId = value;
    m_dataSourceIdIsSet = true;
}

bool CreateFetchTaskVM::dataSourceIdIsSet() const
{
    return m_dataSourceIdIsSet;
}

void CreateFetchTaskVM::unsetdataSourceId()
{
    m_dataSourceIdIsSet = false;
}
}
}
}


