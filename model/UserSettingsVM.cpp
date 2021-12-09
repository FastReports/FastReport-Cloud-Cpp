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



#include "UserSettingsVM.h"

namespace fastreport {
namespace cloud {
namespace models {




UserSettingsVM::UserSettingsVM()
{
    m_profileVisibilityIsSet = false;
    m_defaultSubscription = utility::conversions::to_string_t("");
    m_defaultSubscriptionIsSet = false;
    m_showHiddenFilesAndFolders = false;
    m_showHiddenFilesAndFoldersIsSet = false;
}

UserSettingsVM::~UserSettingsVM()
{
}

void UserSettingsVM::validate()
{
    // TODO: implement validation
}

web::json::value UserSettingsVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_profileVisibilityIsSet)
    {
        val[utility::conversions::to_string_t("profileVisibility")] = ModelBase::toJson(m_profileVisibility);
    }
    if(m_defaultSubscriptionIsSet)
    {
        val[utility::conversions::to_string_t("defaultSubscription")] = ModelBase::toJson(m_defaultSubscription);
    }
    if(m_showHiddenFilesAndFoldersIsSet)
    {
        val[utility::conversions::to_string_t("showHiddenFilesAndFolders")] = ModelBase::toJson(m_showHiddenFilesAndFolders);
    }

    return val;
}

bool UserSettingsVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("profileVisibility")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profileVisibility"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ProfileVisibility> refVal_profileVisibility;
            ok &= ModelBase::fromJson(fieldValue, refVal_profileVisibility);
            setProfileVisibility(refVal_profileVisibility);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultSubscription")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultSubscription"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_defaultSubscription;
            ok &= ModelBase::fromJson(fieldValue, refVal_defaultSubscription);
            setDefaultSubscription(refVal_defaultSubscription);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("showHiddenFilesAndFolders")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("showHiddenFilesAndFolders"));
        if(!fieldValue.is_null())
        {
            bool refVal_showHiddenFilesAndFolders;
            ok &= ModelBase::fromJson(fieldValue, refVal_showHiddenFilesAndFolders);
            setShowHiddenFilesAndFolders(refVal_showHiddenFilesAndFolders);
        }
    }
    return ok;
}

void UserSettingsVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_defaultSubscriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultSubscription"), m_defaultSubscription));
    }
    if(m_showHiddenFilesAndFoldersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("showHiddenFilesAndFolders"), m_showHiddenFilesAndFolders));
    }
}

bool UserSettingsVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("profileVisibility")))
    {
        std::shared_ptr<ProfileVisibility> refVal_profileVisibility;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("profileVisibility")), refVal_profileVisibility );
        setProfileVisibility(refVal_profileVisibility);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("defaultSubscription")))
    {
        utility::string_t refVal_defaultSubscription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultSubscription")), refVal_defaultSubscription );
        setDefaultSubscription(refVal_defaultSubscription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("showHiddenFilesAndFolders")))
    {
        bool refVal_showHiddenFilesAndFolders;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("showHiddenFilesAndFolders")), refVal_showHiddenFilesAndFolders );
        setShowHiddenFilesAndFolders(refVal_showHiddenFilesAndFolders);
    }
    return ok;
}

std::shared_ptr<ProfileVisibility> UserSettingsVM::getProfileVisibility() const
{
    return m_profileVisibility;
}

void UserSettingsVM::setProfileVisibility(const std::shared_ptr<ProfileVisibility>& value)
{
    m_profileVisibility = value;
    m_profileVisibilityIsSet = true;
}

bool UserSettingsVM::profileVisibilityIsSet() const
{
    return m_profileVisibilityIsSet;
}

void UserSettingsVM::unsetprofileVisibility()
{
    m_profileVisibilityIsSet = false;
}
utility::string_t UserSettingsVM::getDefaultSubscription() const
{
    return m_defaultSubscription;
}

void UserSettingsVM::setDefaultSubscription(const utility::string_t& value)
{
    m_defaultSubscription = value;
    m_defaultSubscriptionIsSet = true;
}

bool UserSettingsVM::defaultSubscriptionIsSet() const
{
    return m_defaultSubscriptionIsSet;
}

void UserSettingsVM::unsetdefaultSubscription()
{
    m_defaultSubscriptionIsSet = false;
}
bool UserSettingsVM::isShowHiddenFilesAndFolders() const
{
    return m_showHiddenFilesAndFolders;
}

void UserSettingsVM::setShowHiddenFilesAndFolders(bool value)
{
    m_showHiddenFilesAndFolders = value;
    m_showHiddenFilesAndFoldersIsSet = true;
}

bool UserSettingsVM::showHiddenFilesAndFoldersIsSet() const
{
    return m_showHiddenFilesAndFoldersIsSet;
}

void UserSettingsVM::unsetshowHiddenFilesAndFolders()
{
    m_showHiddenFilesAndFoldersIsSet = false;
}
}
}
}


