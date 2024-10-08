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



#include "CppRestOpenAPIClient/model/ExportReportVM.h"

namespace fastreport {
namespace cloud {
namespace models {



ExportReportVM::ExportReportVM()
{
    m_fileName = utility::conversions::to_string_t("");
    m_fileNameIsSet = false;
    m_folderId = utility::conversions::to_string_t("");
    m_folderIdIsSet = false;
    m_locale = utility::conversions::to_string_t("");
    m_localeIsSet = false;
    m_pagesCount = 0;
    m_pagesCountIsSet = false;
    m_formatIsSet = false;
    m_exportParametersIsSet = false;
}

ExportReportVM::~ExportReportVM()
{
}

void ExportReportVM::validate()
{
    // TODO: implement validation
}

web::json::value ExportReportVM::toJson() const
{
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_fileNameIsSet)
    {
        val[utility::conversions::to_string_t(U("fileName"))] = ModelBase::toJson(m_fileName);
    }
    if(m_folderIdIsSet)
    {
        val[utility::conversions::to_string_t(U("folderId"))] = ModelBase::toJson(m_folderId);
    }
    if(m_localeIsSet)
    {
        val[utility::conversions::to_string_t(U("locale"))] = ModelBase::toJson(m_locale);
    }
    if(m_pagesCountIsSet)
    {
        val[utility::conversions::to_string_t(U("pagesCount"))] = ModelBase::toJson(m_pagesCount);
    }
    if(m_formatIsSet)
    {
        val[utility::conversions::to_string_t(U("format"))] = ModelBase::toJson(m_format);
    }
    if(m_exportParametersIsSet)
    {
        val[utility::conversions::to_string_t(U("exportParameters"))] = ModelBase::toJson(m_exportParameters);
    }

    return val;
}

bool ExportReportVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("fileName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("fileName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFileName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFileName);
            setFileName(refVal_setFileName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("folderId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("folderId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFolderId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFolderId);
            setFolderId(refVal_setFolderId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("locale"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("locale")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setLocale;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLocale);
            setLocale(refVal_setLocale);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("pagesCount"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("pagesCount")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setPagesCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPagesCount);
            setPagesCount(refVal_setPagesCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("format"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("format")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ExportFormat> refVal_setFormat;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFormat);
            setFormat(refVal_setFormat);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("exportParameters"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("exportParameters")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_setExportParameters;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExportParameters);
            setExportParameters(refVal_setExportParameters);
        }
    }
    return ok;
}

void ExportReportVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_fileNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("fileName")), m_fileName));
    }
    if(m_folderIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("folderId")), m_folderId));
    }
    if(m_localeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("locale")), m_locale));
    }
    if(m_pagesCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("pagesCount")), m_pagesCount));
    }
    if(m_formatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("format")), m_format));
    }
    if(m_exportParametersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("exportParameters")), m_exportParameters));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool ExportReportVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("fileName"))))
    {
        utility::string_t refVal_setFileName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("fileName"))), refVal_setFileName );
        setFileName(refVal_setFileName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("folderId"))))
    {
        utility::string_t refVal_setFolderId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("folderId"))), refVal_setFolderId );
        setFolderId(refVal_setFolderId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("locale"))))
    {
        utility::string_t refVal_setLocale;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("locale"))), refVal_setLocale );
        setLocale(refVal_setLocale);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("pagesCount"))))
    {
        int32_t refVal_setPagesCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("pagesCount"))), refVal_setPagesCount );
        setPagesCount(refVal_setPagesCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("format"))))
    {
        std::shared_ptr<ExportFormat> refVal_setFormat;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("format"))), refVal_setFormat );
        setFormat(refVal_setFormat);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("exportParameters"))))
    {
        std::map<utility::string_t, utility::string_t> refVal_setExportParameters;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("exportParameters"))), refVal_setExportParameters );
        setExportParameters(refVal_setExportParameters);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

utility::string_t ExportReportVM::getFileName() const
{
    return m_fileName;
}

void ExportReportVM::setFileName(const utility::string_t& value)
{
    m_fileName = value;
    m_fileNameIsSet = true;
}

bool ExportReportVM::fileNameIsSet() const
{
    return m_fileNameIsSet;
}

void ExportReportVM::unsetfileName()
{
    m_fileNameIsSet = false;
}
utility::string_t ExportReportVM::getFolderId() const
{
    return m_folderId;
}

void ExportReportVM::setFolderId(const utility::string_t& value)
{
    m_folderId = value;
    m_folderIdIsSet = true;
}

bool ExportReportVM::folderIdIsSet() const
{
    return m_folderIdIsSet;
}

void ExportReportVM::unsetfolderId()
{
    m_folderIdIsSet = false;
}
utility::string_t ExportReportVM::getLocale() const
{
    return m_locale;
}

void ExportReportVM::setLocale(const utility::string_t& value)
{
    m_locale = value;
    m_localeIsSet = true;
}

bool ExportReportVM::localeIsSet() const
{
    return m_localeIsSet;
}

void ExportReportVM::unsetlocale()
{
    m_localeIsSet = false;
}
int32_t ExportReportVM::getPagesCount() const
{
    return m_pagesCount;
}

void ExportReportVM::setPagesCount(int32_t value)
{
    m_pagesCount = value;
    m_pagesCountIsSet = true;
}

bool ExportReportVM::pagesCountIsSet() const
{
    return m_pagesCountIsSet;
}

void ExportReportVM::unsetpagesCount()
{
    m_pagesCountIsSet = false;
}
std::shared_ptr<ExportFormat> ExportReportVM::getFormat() const
{
    return m_format;
}

void ExportReportVM::setFormat(const std::shared_ptr<ExportFormat>& value)
{
    m_format = value;
    m_formatIsSet = true;
}

bool ExportReportVM::formatIsSet() const
{
    return m_formatIsSet;
}

void ExportReportVM::unsetformat()
{
    m_formatIsSet = false;
}
std::map<utility::string_t, utility::string_t>& ExportReportVM::getExportParameters()
{
    return m_exportParameters;
}

void ExportReportVM::setExportParameters(const std::map<utility::string_t, utility::string_t>& value)
{
    m_exportParameters = value;
    m_exportParametersIsSet = true;
}

bool ExportReportVM::exportParametersIsSet() const
{
    return m_exportParametersIsSet;
}

void ExportReportVM::unsetexportParameters()
{
    m_exportParametersIsSet = false;
}
}
}
}


