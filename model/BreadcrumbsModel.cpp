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



#include "BreadcrumbsModel.h"

namespace fastreport {
namespace cloud {
namespace models {




BreadcrumbsModel::BreadcrumbsModel()
{
    m_id = utility::conversions::to_string_t("");
    m_idIsSet = false;
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
}

BreadcrumbsModel::~BreadcrumbsModel()
{
}

void BreadcrumbsModel::validate()
{
    // TODO: implement validation
}

web::json::value BreadcrumbsModel::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_idIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_id);
    }
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_name);
    }

    return val;
}

bool BreadcrumbsModel::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    return ok;
}

void BreadcrumbsModel::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_id));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_name));
    }
}

bool BreadcrumbsModel::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    return ok;
}

utility::string_t BreadcrumbsModel::getId() const
{
    return m_id;
}

void BreadcrumbsModel::setId(const utility::string_t& value)
{
    m_id = value;
    m_idIsSet = true;
}

bool BreadcrumbsModel::idIsSet() const
{
    return m_idIsSet;
}

void BreadcrumbsModel::unsetid()
{
    m_idIsSet = false;
}
utility::string_t BreadcrumbsModel::getName() const
{
    return m_name;
}

void BreadcrumbsModel::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool BreadcrumbsModel::nameIsSet() const
{
    return m_nameIsSet;
}

void BreadcrumbsModel::unsetname()
{
    m_nameIsSet = false;
}
}
}
}

