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



#include "CppRestOpenAPIClient/model/UpdateFileContentVM.h"

namespace fastreport {
namespace cloud {
namespace models {



UpdateFileContentVM::UpdateFileContentVM()
{
    m_contentIsSet = false;
}

UpdateFileContentVM::~UpdateFileContentVM()
{
}

void UpdateFileContentVM::validate()
{
    // TODO: implement validation
}

web::json::value UpdateFileContentVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_contentIsSet)
    {
        val[utility::conversions::to_string_t(U("content"))] = ModelBase::toJson(m_content);
    }

    return val;
}

bool UpdateFileContentVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("content"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("content")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setContent;
            ok &= ModelBase::fromJson(fieldValue, refVal_setContent);
            setContent(refVal_setContent);
        }
    }
    return ok;
}

void UpdateFileContentVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_contentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("content")), m_content));
    }
}

bool UpdateFileContentVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("content"))))
    {
        utility::string_t refVal_setContent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("content"))), refVal_setContent );
        setContent(refVal_setContent);
    }
    return ok;
}

utility::string_t UpdateFileContentVM::getContent() const
{
    return m_content;
}

void UpdateFileContentVM::setContent(const utility::string_t& value)
{
    m_content = value;
    m_contentIsSet = true;
}

bool UpdateFileContentVM::contentIsSet() const
{
    return m_contentIsSet;
}

void UpdateFileContentVM::unsetcontent()
{
    m_contentIsSet = false;
}
}
}
}


