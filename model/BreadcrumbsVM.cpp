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



#include "BreadcrumbsVM.h"

namespace fastreport {
namespace cloud {
namespace models {




BreadcrumbsVM::BreadcrumbsVM()
{
    m_breadcrumbsIsSet = false;
}

BreadcrumbsVM::~BreadcrumbsVM()
{
}

void BreadcrumbsVM::validate()
{
    // TODO: implement validation
}

web::json::value BreadcrumbsVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_breadcrumbsIsSet)
    {
        val[utility::conversions::to_string_t("breadcrumbs")] = ModelBase::toJson(m_breadcrumbs);
    }

    return val;
}

bool BreadcrumbsVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("breadcrumbs")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("breadcrumbs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BreadcrumbsModel>> refVal_breadcrumbs;
            ok &= ModelBase::fromJson(fieldValue, refVal_breadcrumbs);
            setBreadcrumbs(refVal_breadcrumbs);
        }
    }
    return ok;
}

void BreadcrumbsVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_breadcrumbsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("breadcrumbs"), m_breadcrumbs));
    }
}

bool BreadcrumbsVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("breadcrumbs")))
    {
        std::vector<std::shared_ptr<BreadcrumbsModel>> refVal_breadcrumbs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("breadcrumbs")), refVal_breadcrumbs );
        setBreadcrumbs(refVal_breadcrumbs);
    }
    return ok;
}

std::vector<std::shared_ptr<BreadcrumbsModel>>& BreadcrumbsVM::getBreadcrumbs()
{
    return m_breadcrumbs;
}

void BreadcrumbsVM::setBreadcrumbs(const std::vector<std::shared_ptr<BreadcrumbsModel>>& value)
{
    m_breadcrumbs = value;
    m_breadcrumbsIsSet = true;
}

bool BreadcrumbsVM::breadcrumbsIsSet() const
{
    return m_breadcrumbsIsSet;
}

void BreadcrumbsVM::unsetbreadcrumbs()
{
    m_breadcrumbsIsSet = false;
}
}
}
}


