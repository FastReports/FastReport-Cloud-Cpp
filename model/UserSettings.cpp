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



#include "UserSettings.h"

namespace fastreport {
namespace cloud {
namespace models {




UserSettings::UserSettings()
{
    m_profileVisibility = ProfileVisibilityEnum._0;
    m_profileVisibilityIsSet = false;
}

UserSettings::~UserSettings()
{
}

void UserSettings::validate()
{
    // TODO: implement validation
}

web::json::value UserSettings::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_profileVisibilityIsSet)
    {
        val[utility::conversions::to_string_t("profileVisibility")] = ModelBase::toJson(m_profileVisibility);
    }

    return val;
}

bool UserSettings::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("profileVisibility")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profileVisibility"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_profileVisibility;
            ok &= ModelBase::fromJson(fieldValue, refVal_profileVisibility);
            setProfileVisibility(refVal_profileVisibility);
        }
    }
    return ok;
}

void UserSettings::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_profileVisibilityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("profileVisibility"), m_profileVisibility));
    }
}

bool UserSettings::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("profileVisibility")))
    {
        int32_t refVal_profileVisibility;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("profileVisibility")), refVal_profileVisibility );
        setProfileVisibility(refVal_profileVisibility);
    }
    return ok;
}

int32_t UserSettings::getProfileVisibility() const
{
    return m_profileVisibility;
}

void UserSettings::setProfileVisibility(int32_t value)
{
    m_profileVisibility = value;
    m_profileVisibilityIsSet = true;
}

bool UserSettings::profileVisibilityIsSet() const
{
    return m_profileVisibilityIsSet;
}

void UserSettings::unsetprofileVisibility()
{
    m_profileVisibilityIsSet = false;
}
}
}
}


