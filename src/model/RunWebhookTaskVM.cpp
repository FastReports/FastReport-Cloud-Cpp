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



#include "CppRestOpenAPIClient/model/RunWebhookTaskVM.h"

namespace fastreport {
namespace cloud {
namespace models {



RunWebhookTaskVM::RunWebhookTaskVM()
{
    m_headersIsSet = false;
    m_url = utility::conversions::to_string_t("");
    m_urlIsSet = false;
}

RunWebhookTaskVM::~RunWebhookTaskVM()
{
}

void RunWebhookTaskVM::validate()
{
    // TODO: implement validation
}

web::json::value RunWebhookTaskVM::toJson() const
{
    web::json::value val = this->RunTransportTaskBaseVM::toJson();
    
    if(m_headersIsSet)
    {
        val[utility::conversions::to_string_t(U("headers"))] = ModelBase::toJson(m_headers);
    }
    if(m_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("url"))] = ModelBase::toJson(m_url);
    }

    return val;
}

bool RunWebhookTaskVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->RunTransportTaskBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("headers"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("headers")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_setHeaders;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHeaders);
            setHeaders(refVal_setHeaders);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUrl);
            setUrl(refVal_setUrl);
        }
    }
    return ok;
}

void RunWebhookTaskVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_headersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("headers")), m_headers));
    }
    if(m_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("url")), m_url));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
    if(m_inputFileIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("inputFile")), m_inputFile));
    }
    if(m_subscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptionId")), m_subscriptionId));
    }
}

bool RunWebhookTaskVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("headers"))))
    {
        std::map<utility::string_t, utility::string_t> refVal_setHeaders;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("headers"))), refVal_setHeaders );
        setHeaders(refVal_setHeaders);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("url"))))
    {
        utility::string_t refVal_setUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("url"))), refVal_setUrl );
        setUrl(refVal_setUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("inputFile"))))
    {
        std::shared_ptr<RunInputFileVM> refVal_setInputFile;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inputFile"))), refVal_setInputFile );
        setInputFile(refVal_setInputFile);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subscriptionId"))))
    {
        utility::string_t refVal_setSubscriptionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subscriptionId"))), refVal_setSubscriptionId );
        setSubscriptionId(refVal_setSubscriptionId);
    }
    return ok;
}

std::map<utility::string_t, utility::string_t>& RunWebhookTaskVM::getHeaders()
{
    return m_headers;
}

void RunWebhookTaskVM::setHeaders(const std::map<utility::string_t, utility::string_t>& value)
{
    m_headers = value;
    m_headersIsSet = true;
}

bool RunWebhookTaskVM::headersIsSet() const
{
    return m_headersIsSet;
}

void RunWebhookTaskVM::unsetheaders()
{
    m_headersIsSet = false;
}
utility::string_t RunWebhookTaskVM::getUrl() const
{
    return m_url;
}

void RunWebhookTaskVM::setUrl(const utility::string_t& value)
{
    m_url = value;
    m_urlIsSet = true;
}

bool RunWebhookTaskVM::urlIsSet() const
{
    return m_urlIsSet;
}

void RunWebhookTaskVM::unseturl()
{
    m_urlIsSet = false;
}
}
}
}


