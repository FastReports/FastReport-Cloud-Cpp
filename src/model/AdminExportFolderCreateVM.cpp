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



#include "CppRestOpenAPIClient/model/AdminExportFolderCreateVM.h"

namespace fastreport {
namespace cloud {
namespace models {



AdminExportFolderCreateVM::AdminExportFolderCreateVM()
{
}

AdminExportFolderCreateVM::~AdminExportFolderCreateVM()
{
}

void AdminExportFolderCreateVM::validate()
{
    // TODO: implement validation
}

web::json::value AdminExportFolderCreateVM::toJson() const
{

    web::json::value val = web::json::value::object();
    

    return val;
}

bool AdminExportFolderCreateVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}

void AdminExportFolderCreateVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_tagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tags")), m_tags));
    }
    if(m_iconIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("icon")), m_icon));
    }
}

bool AdminExportFolderCreateVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("tags"))))
    {
        std::vector<utility::string_t> refVal_setTags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tags"))), refVal_setTags );
        setTags(refVal_setTags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("icon"))))
    {
        utility::string_t refVal_setIcon;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("icon"))), refVal_setIcon );
        setIcon(refVal_setIcon);
    }
    return ok;
}

}
}
}


