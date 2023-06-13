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



#include "CppRestOpenAPIClient/model/ExportsVM.h"

namespace fastreport {
namespace cloud {
namespace models {



ExportsVM::ExportsVM()
{
}

ExportsVM::~ExportsVM()
{
}

void ExportsVM::validate()
{
    // TODO: implement validation
}

web::json::value ExportsVM::toJson() const
{

    web::json::value val = web::json::value::object();
    

    return val;
}

bool ExportsVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}

void ExportsVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_filesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("files")), m_files));
    }
    if(m_countIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("count")), m_count));
    }
    if(m_skipIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("skip")), m_skip));
    }
    if(m_takeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("take")), m_take));
    }
}

bool ExportsVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("files"))))
    {
        std::vector<std::shared_ptr<ExportVM>> refVal_setFiles;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("files"))), refVal_setFiles );
        setFiles(refVal_setFiles);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("count"))))
    {
        int64_t refVal_setCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("count"))), refVal_setCount );
        setCount(refVal_setCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("skip"))))
    {
        int32_t refVal_setSkip;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("skip"))), refVal_setSkip );
        setSkip(refVal_setSkip);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("take"))))
    {
        int32_t refVal_setTake;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("take"))), refVal_setTake );
        setTake(refVal_setTake);
    }
    return ok;
}

}
}
}


