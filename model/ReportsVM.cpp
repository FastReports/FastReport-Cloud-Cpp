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



#include "ReportsVM.h"

namespace fastreport {
namespace cloud {
namespace models {




ReportsVM::ReportsVM()
{
    m_filesIsSet = false;
    m_count = 0L;
    m_countIsSet = false;
    m_skip = 0;
    m_skipIsSet = false;
    m_take = 0;
    m_takeIsSet = false;
}

ReportsVM::~ReportsVM()
{
}

void ReportsVM::validate()
{
    // TODO: implement validation
}

web::json::value ReportsVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_filesIsSet)
    {
        val[utility::conversions::to_string_t("files")] = ModelBase::toJson(m_files);
    }
    if(m_countIsSet)
    {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(m_count);
    }
    if(m_skipIsSet)
    {
        val[utility::conversions::to_string_t("skip")] = ModelBase::toJson(m_skip);
    }
    if(m_takeIsSet)
    {
        val[utility::conversions::to_string_t("take")] = ModelBase::toJson(m_take);
    }

    return val;
}

bool ReportsVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("files")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ReportVM>> refVal_files;
            ok &= ModelBase::fromJson(fieldValue, refVal_files);
            setFiles(refVal_files);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_count;
            ok &= ModelBase::fromJson(fieldValue, refVal_count);
            setCount(refVal_count);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("skip")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skip"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_skip;
            ok &= ModelBase::fromJson(fieldValue, refVal_skip);
            setSkip(refVal_skip);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("take")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("take"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_take;
            ok &= ModelBase::fromJson(fieldValue, refVal_take);
            setTake(refVal_take);
        }
    }
    return ok;
}

void ReportsVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_filesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("files"), m_files));
    }
    if(m_countIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("count"), m_count));
    }
    if(m_skipIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("skip"), m_skip));
    }
    if(m_takeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("take"), m_take));
    }
}

bool ReportsVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("files")))
    {
        std::vector<std::shared_ptr<ReportVM>> refVal_files;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("files")), refVal_files );
        setFiles(refVal_files);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("count")))
    {
        int64_t refVal_count;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("count")), refVal_count );
        setCount(refVal_count);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("skip")))
    {
        int32_t refVal_skip;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("skip")), refVal_skip );
        setSkip(refVal_skip);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("take")))
    {
        int32_t refVal_take;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("take")), refVal_take );
        setTake(refVal_take);
    }
    return ok;
}

std::vector<std::shared_ptr<ReportVM>>& ReportsVM::getFiles()
{
    return m_files;
}

void ReportsVM::setFiles(const std::vector<std::shared_ptr<ReportVM>>& value)
{
    m_files = value;
    m_filesIsSet = true;
}

bool ReportsVM::filesIsSet() const
{
    return m_filesIsSet;
}

void ReportsVM::unsetfiles()
{
    m_filesIsSet = false;
}
int64_t ReportsVM::getCount() const
{
    return m_count;
}

void ReportsVM::setCount(int64_t value)
{
    m_count = value;
    m_countIsSet = true;
}

bool ReportsVM::countIsSet() const
{
    return m_countIsSet;
}

void ReportsVM::unsetcount()
{
    m_countIsSet = false;
}
int32_t ReportsVM::getSkip() const
{
    return m_skip;
}

void ReportsVM::setSkip(int32_t value)
{
    m_skip = value;
    m_skipIsSet = true;
}

bool ReportsVM::skipIsSet() const
{
    return m_skipIsSet;
}

void ReportsVM::unsetskip()
{
    m_skipIsSet = false;
}
int32_t ReportsVM::getTake() const
{
    return m_take;
}

void ReportsVM::setTake(int32_t value)
{
    m_take = value;
    m_takeIsSet = true;
}

bool ReportsVM::takeIsSet() const
{
    return m_takeIsSet;
}

void ReportsVM::unsettake()
{
    m_takeIsSet = false;
}
}
}
}


