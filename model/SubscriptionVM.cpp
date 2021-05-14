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



#include "SubscriptionVM.h"

namespace fastreport {
namespace cloud {
namespace models {




SubscriptionVM::SubscriptionVM()
{
    m_id = utility::conversions::to_string_t("");
    m_idIsSet = false;
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_locale = utility::conversions::to_string_t("");
    m_localeIsSet = false;
    m_currentIsSet = false;
    m_oldIsSet = false;
    m_templatesFolderIsSet = false;
    m_reportsFolderIsSet = false;
    m_exportsFolderIsSet = false;
}

SubscriptionVM::~SubscriptionVM()
{
}

void SubscriptionVM::validate()
{
    // TODO: implement validation
}

web::json::value SubscriptionVM::toJson() const
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
    if(m_localeIsSet)
    {
        val[utility::conversions::to_string_t("locale")] = ModelBase::toJson(m_locale);
    }
    if(m_currentIsSet)
    {
        val[utility::conversions::to_string_t("current")] = ModelBase::toJson(m_current);
    }
    if(m_oldIsSet)
    {
        val[utility::conversions::to_string_t("old")] = ModelBase::toJson(m_old);
    }
    if(m_templatesFolderIsSet)
    {
        val[utility::conversions::to_string_t("templatesFolder")] = ModelBase::toJson(m_templatesFolder);
    }
    if(m_reportsFolderIsSet)
    {
        val[utility::conversions::to_string_t("reportsFolder")] = ModelBase::toJson(m_reportsFolder);
    }
    if(m_exportsFolderIsSet)
    {
        val[utility::conversions::to_string_t("exportsFolder")] = ModelBase::toJson(m_exportsFolder);
    }

    return val;
}

bool SubscriptionVM::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("locale")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locale"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_locale;
            ok &= ModelBase::fromJson(fieldValue, refVal_locale);
            setLocale(refVal_locale);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SubscriptionPeriodVM> refVal_current;
            ok &= ModelBase::fromJson(fieldValue, refVal_current);
            setCurrent(refVal_current);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("old")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<SubscriptionPeriodVM>> refVal_old;
            ok &= ModelBase::fromJson(fieldValue, refVal_old);
            setOld(refVal_old);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("templatesFolder")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templatesFolder"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SubscriptionFolder> refVal_templatesFolder;
            ok &= ModelBase::fromJson(fieldValue, refVal_templatesFolder);
            setTemplatesFolder(refVal_templatesFolder);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reportsFolder")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reportsFolder"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SubscriptionFolder> refVal_reportsFolder;
            ok &= ModelBase::fromJson(fieldValue, refVal_reportsFolder);
            setReportsFolder(refVal_reportsFolder);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exportsFolder")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exportsFolder"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SubscriptionFolder> refVal_exportsFolder;
            ok &= ModelBase::fromJson(fieldValue, refVal_exportsFolder);
            setExportsFolder(refVal_exportsFolder);
        }
    }
    return ok;
}

void SubscriptionVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_localeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("locale"), m_locale));
    }
    if(m_currentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("current"), m_current));
    }
    if(m_oldIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("old"), m_old));
    }
    if(m_templatesFolderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("templatesFolder"), m_templatesFolder));
    }
    if(m_reportsFolderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("reportsFolder"), m_reportsFolder));
    }
    if(m_exportsFolderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("exportsFolder"), m_exportsFolder));
    }
}

bool SubscriptionVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("locale")))
    {
        utility::string_t refVal_locale;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("locale")), refVal_locale );
        setLocale(refVal_locale);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("current")))
    {
        std::shared_ptr<SubscriptionPeriodVM> refVal_current;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("current")), refVal_current );
        setCurrent(refVal_current);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("old")))
    {
        std::vector<std::shared_ptr<SubscriptionPeriodVM>> refVal_old;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("old")), refVal_old );
        setOld(refVal_old);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("templatesFolder")))
    {
        std::shared_ptr<SubscriptionFolder> refVal_templatesFolder;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("templatesFolder")), refVal_templatesFolder );
        setTemplatesFolder(refVal_templatesFolder);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("reportsFolder")))
    {
        std::shared_ptr<SubscriptionFolder> refVal_reportsFolder;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("reportsFolder")), refVal_reportsFolder );
        setReportsFolder(refVal_reportsFolder);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("exportsFolder")))
    {
        std::shared_ptr<SubscriptionFolder> refVal_exportsFolder;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("exportsFolder")), refVal_exportsFolder );
        setExportsFolder(refVal_exportsFolder);
    }
    return ok;
}

utility::string_t SubscriptionVM::getId() const
{
    return m_id;
}

void SubscriptionVM::setId(const utility::string_t& value)
{
    m_id = value;
    m_idIsSet = true;
}

bool SubscriptionVM::idIsSet() const
{
    return m_idIsSet;
}

void SubscriptionVM::unsetid()
{
    m_idIsSet = false;
}
utility::string_t SubscriptionVM::getName() const
{
    return m_name;
}

void SubscriptionVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool SubscriptionVM::nameIsSet() const
{
    return m_nameIsSet;
}

void SubscriptionVM::unsetname()
{
    m_nameIsSet = false;
}
utility::string_t SubscriptionVM::getLocale() const
{
    return m_locale;
}

void SubscriptionVM::setLocale(const utility::string_t& value)
{
    m_locale = value;
    m_localeIsSet = true;
}

bool SubscriptionVM::localeIsSet() const
{
    return m_localeIsSet;
}

void SubscriptionVM::unsetlocale()
{
    m_localeIsSet = false;
}
std::shared_ptr<SubscriptionPeriodVM> SubscriptionVM::getCurrent() const
{
    return m_current;
}

void SubscriptionVM::setCurrent(const std::shared_ptr<SubscriptionPeriodVM>& value)
{
    m_current = value;
    m_currentIsSet = true;
}

bool SubscriptionVM::currentIsSet() const
{
    return m_currentIsSet;
}

void SubscriptionVM::unsetcurrent()
{
    m_currentIsSet = false;
}
std::vector<std::shared_ptr<SubscriptionPeriodVM>>& SubscriptionVM::getOld()
{
    return m_old;
}

void SubscriptionVM::setOld(const std::vector<std::shared_ptr<SubscriptionPeriodVM>>& value)
{
    m_old = value;
    m_oldIsSet = true;
}

bool SubscriptionVM::oldIsSet() const
{
    return m_oldIsSet;
}

void SubscriptionVM::unsetold()
{
    m_oldIsSet = false;
}
std::shared_ptr<SubscriptionFolder> SubscriptionVM::getTemplatesFolder() const
{
    return m_templatesFolder;
}

void SubscriptionVM::setTemplatesFolder(const std::shared_ptr<SubscriptionFolder>& value)
{
    m_templatesFolder = value;
    m_templatesFolderIsSet = true;
}

bool SubscriptionVM::templatesFolderIsSet() const
{
    return m_templatesFolderIsSet;
}

void SubscriptionVM::unsettemplatesFolder()
{
    m_templatesFolderIsSet = false;
}
std::shared_ptr<SubscriptionFolder> SubscriptionVM::getReportsFolder() const
{
    return m_reportsFolder;
}

void SubscriptionVM::setReportsFolder(const std::shared_ptr<SubscriptionFolder>& value)
{
    m_reportsFolder = value;
    m_reportsFolderIsSet = true;
}

bool SubscriptionVM::reportsFolderIsSet() const
{
    return m_reportsFolderIsSet;
}

void SubscriptionVM::unsetreportsFolder()
{
    m_reportsFolderIsSet = false;
}
std::shared_ptr<SubscriptionFolder> SubscriptionVM::getExportsFolder() const
{
    return m_exportsFolder;
}

void SubscriptionVM::setExportsFolder(const std::shared_ptr<SubscriptionFolder>& value)
{
    m_exportsFolder = value;
    m_exportsFolderIsSet = true;
}

bool SubscriptionVM::exportsFolderIsSet() const
{
    return m_exportsFolderIsSet;
}

void SubscriptionVM::unsetexportsFolder()
{
    m_exportsFolderIsSet = false;
}
}
}
}

