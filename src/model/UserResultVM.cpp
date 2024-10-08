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



#include "CppRestOpenAPIClient/model/UserResultVM.h"

namespace fastreport {
namespace cloud {
namespace models {



UserResultVM::UserResultVM()
{
    m_isAuthenticated = false;
    m_isAuthenticatedIsSet = false;
    m_id = utility::conversions::to_string_t("");
    m_idIsSet = false;
    m_isAdmin = false;
    m_isAdminIsSet = false;
    m_adminPermissionIsSet = false;
    m_subscriptionsIsSet = false;
    m_groupsIsSet = false;
    m_provider = utility::conversions::to_string_t("");
    m_providerIsSet = false;
    m_email = utility::conversions::to_string_t("");
    m_emailIsSet = false;
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_username = utility::conversions::to_string_t("");
    m_usernameIsSet = false;
    m_settingsIsSet = false;
}

UserResultVM::~UserResultVM()
{
}

void UserResultVM::validate()
{
    // TODO: implement validation
}

web::json::value UserResultVM::toJson() const
{
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_isAuthenticatedIsSet)
    {
        val[utility::conversions::to_string_t(U("isAuthenticated"))] = ModelBase::toJson(m_isAuthenticated);
    }
    if(m_idIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_id);
    }
    if(m_isAdminIsSet)
    {
        val[utility::conversions::to_string_t(U("isAdmin"))] = ModelBase::toJson(m_isAdmin);
    }
    if(m_adminPermissionIsSet)
    {
        val[utility::conversions::to_string_t(U("adminPermission"))] = ModelBase::toJson(m_adminPermission);
    }
    if(m_subscriptionsIsSet)
    {
        val[utility::conversions::to_string_t(U("subscriptions"))] = ModelBase::toJson(m_subscriptions);
    }
    if(m_groupsIsSet)
    {
        val[utility::conversions::to_string_t(U("groups"))] = ModelBase::toJson(m_groups);
    }
    if(m_providerIsSet)
    {
        val[utility::conversions::to_string_t(U("provider"))] = ModelBase::toJson(m_provider);
    }
    if(m_emailIsSet)
    {
        val[utility::conversions::to_string_t(U("email"))] = ModelBase::toJson(m_email);
    }
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_name);
    }
    if(m_usernameIsSet)
    {
        val[utility::conversions::to_string_t(U("username"))] = ModelBase::toJson(m_username);
    }
    if(m_settingsIsSet)
    {
        val[utility::conversions::to_string_t(U("settings"))] = ModelBase::toJson(m_settings);
    }

    return val;
}

bool UserResultVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("isAuthenticated"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("isAuthenticated")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsAuthenticated;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsAuthenticated);
            setIsAuthenticated(refVal_setIsAuthenticated);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("isAdmin"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("isAdmin")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsAdmin;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsAdmin);
            setIsAdmin(refVal_setIsAdmin);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("adminPermission"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("adminPermission")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<AdminPermission> refVal_setAdminPermission;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAdminPermission);
            setAdminPermission(refVal_setAdminPermission);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("subscriptions"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("subscriptions")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setSubscriptions;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSubscriptions);
            setSubscriptions(refVal_setSubscriptions);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("groups"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("groups")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setGroups;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGroups);
            setGroups(refVal_setGroups);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("provider"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("provider")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setProvider;
            ok &= ModelBase::fromJson(fieldValue, refVal_setProvider);
            setProvider(refVal_setProvider);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("email"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("email")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEmail;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEmail);
            setEmail(refVal_setEmail);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("username"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("username")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUsername;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUsername);
            setUsername(refVal_setUsername);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("settings"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("settings")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<UserSettingsVM> refVal_setSettings;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSettings);
            setSettings(refVal_setSettings);
        }
    }
    return ok;
}

void UserResultVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_isAuthenticatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("isAuthenticated")), m_isAuthenticated));
    }
    if(m_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_id));
    }
    if(m_isAdminIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("isAdmin")), m_isAdmin));
    }
    if(m_adminPermissionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("adminPermission")), m_adminPermission));
    }
    if(m_subscriptionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptions")), m_subscriptions));
    }
    if(m_groupsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("groups")), m_groups));
    }
    if(m_providerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("provider")), m_provider));
    }
    if(m_emailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("email")), m_email));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_usernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("username")), m_username));
    }
    if(m_settingsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("settings")), m_settings));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool UserResultVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("isAuthenticated"))))
    {
        bool refVal_setIsAuthenticated;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("isAuthenticated"))), refVal_setIsAuthenticated );
        setIsAuthenticated(refVal_setIsAuthenticated);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("isAdmin"))))
    {
        bool refVal_setIsAdmin;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("isAdmin"))), refVal_setIsAdmin );
        setIsAdmin(refVal_setIsAdmin);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("adminPermission"))))
    {
        std::shared_ptr<AdminPermission> refVal_setAdminPermission;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("adminPermission"))), refVal_setAdminPermission );
        setAdminPermission(refVal_setAdminPermission);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subscriptions"))))
    {
        std::vector<utility::string_t> refVal_setSubscriptions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subscriptions"))), refVal_setSubscriptions );
        setSubscriptions(refVal_setSubscriptions);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("groups"))))
    {
        std::vector<utility::string_t> refVal_setGroups;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("groups"))), refVal_setGroups );
        setGroups(refVal_setGroups);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("provider"))))
    {
        utility::string_t refVal_setProvider;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("provider"))), refVal_setProvider );
        setProvider(refVal_setProvider);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("email"))))
    {
        utility::string_t refVal_setEmail;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("email"))), refVal_setEmail );
        setEmail(refVal_setEmail);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("username"))))
    {
        utility::string_t refVal_setUsername;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("username"))), refVal_setUsername );
        setUsername(refVal_setUsername);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("settings"))))
    {
        std::shared_ptr<UserSettingsVM> refVal_setSettings;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("settings"))), refVal_setSettings );
        setSettings(refVal_setSettings);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

bool UserResultVM::isIsAuthenticated() const
{
    return m_isAuthenticated;
}

void UserResultVM::setIsAuthenticated(bool value)
{
    m_isAuthenticated = value;
    m_isAuthenticatedIsSet = true;
}

bool UserResultVM::isAuthenticatedIsSet() const
{
    return m_isAuthenticatedIsSet;
}

void UserResultVM::unsetisAuthenticated()
{
    m_isAuthenticatedIsSet = false;
}
utility::string_t UserResultVM::getId() const
{
    return m_id;
}

void UserResultVM::setId(const utility::string_t& value)
{
    m_id = value;
    m_idIsSet = true;
}

bool UserResultVM::idIsSet() const
{
    return m_idIsSet;
}

void UserResultVM::unsetid()
{
    m_idIsSet = false;
}
bool UserResultVM::isIsAdmin() const
{
    return m_isAdmin;
}

void UserResultVM::setIsAdmin(bool value)
{
    m_isAdmin = value;
    m_isAdminIsSet = true;
}

bool UserResultVM::isAdminIsSet() const
{
    return m_isAdminIsSet;
}

void UserResultVM::unsetisAdmin()
{
    m_isAdminIsSet = false;
}
std::shared_ptr<AdminPermission> UserResultVM::getAdminPermission() const
{
    return m_adminPermission;
}

void UserResultVM::setAdminPermission(const std::shared_ptr<AdminPermission>& value)
{
    m_adminPermission = value;
    m_adminPermissionIsSet = true;
}

bool UserResultVM::adminPermissionIsSet() const
{
    return m_adminPermissionIsSet;
}

void UserResultVM::unsetadminPermission()
{
    m_adminPermissionIsSet = false;
}
std::vector<utility::string_t>& UserResultVM::getSubscriptions()
{
    return m_subscriptions;
}

void UserResultVM::setSubscriptions(const std::vector<utility::string_t>& value)
{
    m_subscriptions = value;
    m_subscriptionsIsSet = true;
}

bool UserResultVM::subscriptionsIsSet() const
{
    return m_subscriptionsIsSet;
}

void UserResultVM::unsetsubscriptions()
{
    m_subscriptionsIsSet = false;
}
std::vector<utility::string_t>& UserResultVM::getGroups()
{
    return m_groups;
}

void UserResultVM::setGroups(const std::vector<utility::string_t>& value)
{
    m_groups = value;
    m_groupsIsSet = true;
}

bool UserResultVM::groupsIsSet() const
{
    return m_groupsIsSet;
}

void UserResultVM::unsetgroups()
{
    m_groupsIsSet = false;
}
utility::string_t UserResultVM::getProvider() const
{
    return m_provider;
}

void UserResultVM::setProvider(const utility::string_t& value)
{
    m_provider = value;
    m_providerIsSet = true;
}

bool UserResultVM::providerIsSet() const
{
    return m_providerIsSet;
}

void UserResultVM::unsetprovider()
{
    m_providerIsSet = false;
}
utility::string_t UserResultVM::getEmail() const
{
    return m_email;
}

void UserResultVM::setEmail(const utility::string_t& value)
{
    m_email = value;
    m_emailIsSet = true;
}

bool UserResultVM::emailIsSet() const
{
    return m_emailIsSet;
}

void UserResultVM::unsetemail()
{
    m_emailIsSet = false;
}
utility::string_t UserResultVM::getName() const
{
    return m_name;
}

void UserResultVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool UserResultVM::nameIsSet() const
{
    return m_nameIsSet;
}

void UserResultVM::unsetname()
{
    m_nameIsSet = false;
}
utility::string_t UserResultVM::getUsername() const
{
    return m_username;
}

void UserResultVM::setUsername(const utility::string_t& value)
{
    m_username = value;
    m_usernameIsSet = true;
}

bool UserResultVM::usernameIsSet() const
{
    return m_usernameIsSet;
}

void UserResultVM::unsetusername()
{
    m_usernameIsSet = false;
}
std::shared_ptr<UserSettingsVM> UserResultVM::getSettings() const
{
    return m_settings;
}

void UserResultVM::setSettings(const std::shared_ptr<UserSettingsVM>& value)
{
    m_settings = value;
    m_settingsIsSet = true;
}

bool UserResultVM::settingsIsSet() const
{
    return m_settingsIsSet;
}

void UserResultVM::unsetsettings()
{
    m_settingsIsSet = false;
}
}
}
}


