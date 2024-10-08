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



#include "CppRestOpenAPIClient/model/AuditStatVM.h"

namespace fastreport {
namespace cloud {
namespace models {



AuditStatVM::AuditStatVM()
{
    m_count = 0;
    m_countIsSet = false;
    m_typeIsSet = false;
}

AuditStatVM::~AuditStatVM()
{
}

void AuditStatVM::validate()
{
    // TODO: implement validation
}

web::json::value AuditStatVM::toJson() const
{
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_countIsSet)
    {
        val[utility::conversions::to_string_t(U("count"))] = ModelBase::toJson(m_count);
    }
    if(m_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_type);
    }

    return val;
}

bool AuditStatVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("count"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("count")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCount);
            setCount(refVal_setCount);
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
    return ok;
}

void AuditStatVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_countIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("count")), m_count));
    }
    if(m_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_type));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool AuditStatVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("count"))))
    {
        int32_t refVal_setCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("count"))), refVal_setCount );
        setCount(refVal_setCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        std::shared_ptr<AuditType> refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

int32_t AuditStatVM::getCount() const
{
    return m_count;
}

void AuditStatVM::setCount(int32_t value)
{
    m_count = value;
    m_countIsSet = true;
}

bool AuditStatVM::countIsSet() const
{
    return m_countIsSet;
}

void AuditStatVM::unsetcount()
{
    m_countIsSet = false;
}
std::shared_ptr<AuditType> AuditStatVM::getType() const
{
    return m_type;
}

void AuditStatVM::setType(const std::shared_ptr<AuditType>& value)
{
    m_type = value;
    m_typeIsSet = true;
}

bool AuditStatVM::typeIsSet() const
{
    return m_typeIsSet;
}

void AuditStatVM::unsettype()
{
    m_typeIsSet = false;
}
}
}
}


