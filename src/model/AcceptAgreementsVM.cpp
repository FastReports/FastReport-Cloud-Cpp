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



#include "CppRestOpenAPIClient/model/AcceptAgreementsVM.h"

namespace fastreport {
namespace cloud {
namespace models {



AcceptAgreementsVM::AcceptAgreementsVM()
{
    m_slaAccepted = false;
    m_slaAcceptedIsSet = false;
}

AcceptAgreementsVM::~AcceptAgreementsVM()
{
}

void AcceptAgreementsVM::validate()
{
    // TODO: implement validation
}

web::json::value AcceptAgreementsVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_slaAcceptedIsSet)
    {
        val[utility::conversions::to_string_t(U("slaAccepted"))] = ModelBase::toJson(m_slaAccepted);
    }

    return val;
}

bool AcceptAgreementsVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("slaAccepted"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("slaAccepted")));
        if(!fieldValue.is_null())
        {
            bool refVal_setSlaAccepted;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSlaAccepted);
            setSlaAccepted(refVal_setSlaAccepted);
        }
    }
    return ok;
}

void AcceptAgreementsVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_slaAcceptedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("slaAccepted")), m_slaAccepted));
    }
}

bool AcceptAgreementsVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("slaAccepted"))))
    {
        bool refVal_setSlaAccepted;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("slaAccepted"))), refVal_setSlaAccepted );
        setSlaAccepted(refVal_setSlaAccepted);
    }
    return ok;
}

bool AcceptAgreementsVM::isSlaAccepted() const
{
    return m_slaAccepted;
}

void AcceptAgreementsVM::setSlaAccepted(bool value)
{
    m_slaAccepted = value;
    m_slaAcceptedIsSet = true;
}

bool AcceptAgreementsVM::slaAcceptedIsSet() const
{
    return m_slaAcceptedIsSet;
}

void AcceptAgreementsVM::unsetslaAccepted()
{
    m_slaAcceptedIsSet = false;
}
}
}
}

