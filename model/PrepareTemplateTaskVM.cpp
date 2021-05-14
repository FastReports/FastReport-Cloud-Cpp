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



#include "PrepareTemplateTaskVM.h"

namespace fastreport {
namespace cloud {
namespace models {




PrepareTemplateTaskVM::PrepareTemplateTaskVM()
{
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_locale = utility::conversions::to_string_t("");
    m_localeIsSet = false;
    m_parentFolderId = utility::conversions::to_string_t("");
    m_parentFolderIdIsSet = false;
    m_pagesCount = 0;
    m_pagesCountIsSet = false;
    m_reportParametersIsSet = false;
}

PrepareTemplateTaskVM::~PrepareTemplateTaskVM()
{
}

void PrepareTemplateTaskVM::validate()
{
    // TODO: implement validation
}

web::json::value PrepareTemplateTaskVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_name);
    }
    if(m_localeIsSet)
    {
        val[utility::conversions::to_string_t("locale")] = ModelBase::toJson(m_locale);
    }
    if(m_parentFolderIdIsSet)
    {
        val[utility::conversions::to_string_t("parentFolderId")] = ModelBase::toJson(m_parentFolderId);
    }
    if(m_pagesCountIsSet)
    {
        val[utility::conversions::to_string_t("pagesCount")] = ModelBase::toJson(m_pagesCount);
    }
    if(m_reportParametersIsSet)
    {
        val[utility::conversions::to_string_t("reportParameters")] = ModelBase::toJson(m_reportParameters);
    }

    return val;
}

bool PrepareTemplateTaskVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("parentFolderId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parentFolderId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_parentFolderId;
            ok &= ModelBase::fromJson(fieldValue, refVal_parentFolderId);
            setParentFolderId(refVal_parentFolderId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pagesCount")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pagesCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_pagesCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_pagesCount);
            setPagesCount(refVal_pagesCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reportParameters")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reportParameters"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_reportParameters;
            ok &= ModelBase::fromJson(fieldValue, refVal_reportParameters);
            setReportParameters(refVal_reportParameters);
        }
    }
    return ok;
}

void PrepareTemplateTaskVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_name));
    }
    if(m_localeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("locale"), m_locale));
    }
    if(m_parentFolderIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parentFolderId"), m_parentFolderId));
    }
    if(m_pagesCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pagesCount"), m_pagesCount));
    }
    if(m_reportParametersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("reportParameters"), m_reportParameters));
    }
}

bool PrepareTemplateTaskVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
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
    if(multipart->hasContent(utility::conversions::to_string_t("parentFolderId")))
    {
        utility::string_t refVal_parentFolderId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parentFolderId")), refVal_parentFolderId );
        setParentFolderId(refVal_parentFolderId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pagesCount")))
    {
        int32_t refVal_pagesCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pagesCount")), refVal_pagesCount );
        setPagesCount(refVal_pagesCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("reportParameters")))
    {
        std::map<utility::string_t, utility::string_t> refVal_reportParameters;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("reportParameters")), refVal_reportParameters );
        setReportParameters(refVal_reportParameters);
    }
    return ok;
}

utility::string_t PrepareTemplateTaskVM::getName() const
{
    return m_name;
}

void PrepareTemplateTaskVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool PrepareTemplateTaskVM::nameIsSet() const
{
    return m_nameIsSet;
}

void PrepareTemplateTaskVM::unsetname()
{
    m_nameIsSet = false;
}
utility::string_t PrepareTemplateTaskVM::getLocale() const
{
    return m_locale;
}

void PrepareTemplateTaskVM::setLocale(const utility::string_t& value)
{
    m_locale = value;
    m_localeIsSet = true;
}

bool PrepareTemplateTaskVM::localeIsSet() const
{
    return m_localeIsSet;
}

void PrepareTemplateTaskVM::unsetlocale()
{
    m_localeIsSet = false;
}
utility::string_t PrepareTemplateTaskVM::getParentFolderId() const
{
    return m_parentFolderId;
}

void PrepareTemplateTaskVM::setParentFolderId(const utility::string_t& value)
{
    m_parentFolderId = value;
    m_parentFolderIdIsSet = true;
}

bool PrepareTemplateTaskVM::parentFolderIdIsSet() const
{
    return m_parentFolderIdIsSet;
}

void PrepareTemplateTaskVM::unsetparentFolderId()
{
    m_parentFolderIdIsSet = false;
}
int32_t PrepareTemplateTaskVM::getPagesCount() const
{
    return m_pagesCount;
}

void PrepareTemplateTaskVM::setPagesCount(int32_t value)
{
    m_pagesCount = value;
    m_pagesCountIsSet = true;
}

bool PrepareTemplateTaskVM::pagesCountIsSet() const
{
    return m_pagesCountIsSet;
}

void PrepareTemplateTaskVM::unsetpagesCount()
{
    m_pagesCountIsSet = false;
}
std::map<utility::string_t, utility::string_t>& PrepareTemplateTaskVM::getReportParameters()
{
    return m_reportParameters;
}

void PrepareTemplateTaskVM::setReportParameters(const std::map<utility::string_t, utility::string_t>& value)
{
    m_reportParameters = value;
    m_reportParametersIsSet = true;
}

bool PrepareTemplateTaskVM::reportParametersIsSet() const
{
    return m_reportParametersIsSet;
}

void PrepareTemplateTaskVM::unsetreportParameters()
{
    m_reportParametersIsSet = false;
}
}
}
}


