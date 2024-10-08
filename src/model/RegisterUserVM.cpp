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



#include "CppRestOpenAPIClient/model/RegisterUserVM.h"

namespace fastreport {
namespace cloud {
namespace models {



RegisterUserVM::RegisterUserVM()
{
    m_id = utility::conversions::to_string_t("");
    m_idIsSet = false;
    m_subscriptionsIsSet = false;
    m_groupsIsSet = false;
    m_adminPermissionIsSet = false;
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_username = utility::conversions::to_string_t("");
    m_usernameIsSet = false;
    m_email = utility::conversions::to_string_t("");
    m_emailIsSet = false;
    m_password = utility::conversions::to_string_t("");
    m_passwordIsSet = false;
    m_isAdmin = false;
    m_isAdminIsSet = false;
    m_provider = utility::conversions::to_string_t("");
    m_providerIsSet = false;
}

RegisterUserVM::~RegisterUserVM()
{
}

void RegisterUserVM::validate()
{
    // TODO: implement validation
}

web::json::value RegisterUserVM::toJson() const
{
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_idIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_id);
    }
    if(m_subscriptionsIsSet)
    {
        val[utility::conversions::to_string_t(U("subscriptions"))] = ModelBase::toJson(m_subscriptions);
    }
    if(m_groupsIsSet)
    {
        val[utility::conversions::to_string_t(U("groups"))] = ModelBase::toJson(m_groups);
    }
    if(m_adminPermissionIsSet)
    {
        val[utility::conversions::to_string_t(U("adminPermission"))] = ModelBase::toJson(m_adminPermission);
    }
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_name);
    }
    if(m_usernameIsSet)
    {
        val[utility::conversions::to_string_t(U("username"))] = ModelBase::toJson(m_username);
    }
    if(m_emailIsSet)
    {
        val[utility::conversions::to_string_t(U("email"))] = ModelBase::toJson(m_email);
    }
    if(m_passwordIsSet)
    {
        val[utility::conversions::to_string_t(U("password"))] = ModelBase::toJson(m_password);
    }
    if(m_isAdminIsSet)
    {
        val[utility::conversions::to_string_t(U("isAdmin"))] = ModelBase::toJson(m_isAdmin);
    }
    if(m_providerIsSet)
    {
        val[utility::conversions::to_string_t(U("provider"))] = ModelBase::toJson(m_provider);
    }

    return val;
}

bool RegisterUserVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
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
    if(val.has_field(utility::conversions::to_string_t(U("password"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("password")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPassword;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPassword);
            setPassword(refVal_setPassword);
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
    return ok;
}

void RegisterUserVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_id));
    }
    if(m_subscriptionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptions")), m_subscriptions));
    }
    if(m_groupsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("groups")), m_groups));
    }
    if(m_adminPermissionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("adminPermission")), m_adminPermission));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_usernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("username")), m_username));
    }
    if(m_emailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("email")), m_email));
    }
    if(m_passwordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("password")), m_password));
    }
    if(m_isAdminIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("isAdmin")), m_isAdmin));
    }
    if(m_providerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("provider")), m_provider));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool RegisterUserVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("adminPermission"))))
    {
        std::shared_ptr<AdminPermission> refVal_setAdminPermission;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("adminPermission"))), refVal_setAdminPermission );
        setAdminPermission(refVal_setAdminPermission);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("email"))))
    {
        utility::string_t refVal_setEmail;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("email"))), refVal_setEmail );
        setEmail(refVal_setEmail);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("password"))))
    {
        utility::string_t refVal_setPassword;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("password"))), refVal_setPassword );
        setPassword(refVal_setPassword);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("isAdmin"))))
    {
        bool refVal_setIsAdmin;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("isAdmin"))), refVal_setIsAdmin );
        setIsAdmin(refVal_setIsAdmin);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("provider"))))
    {
        utility::string_t refVal_setProvider;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("provider"))), refVal_setProvider );
        setProvider(refVal_setProvider);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

utility::string_t RegisterUserVM::getId() const
{
    return m_id;
}

void RegisterUserVM::setId(const utility::string_t& value)
{
    m_id = value;
    m_idIsSet = true;
}

bool RegisterUserVM::idIsSet() const
{
    return m_idIsSet;
}

void RegisterUserVM::unsetid()
{
    m_idIsSet = false;
}
std::vector<utility::string_t>& RegisterUserVM::getSubscriptions()
{
    return m_subscriptions;
}

void RegisterUserVM::setSubscriptions(const std::vector<utility::string_t>& value)
{
    m_subscriptions = value;
    m_subscriptionsIsSet = true;
}

bool RegisterUserVM::subscriptionsIsSet() const
{
    return m_subscriptionsIsSet;
}

void RegisterUserVM::unsetsubscriptions()
{
    m_subscriptionsIsSet = false;
}
std::vector<utility::string_t>& RegisterUserVM::getGroups()
{
    return m_groups;
}

void RegisterUserVM::setGroups(const std::vector<utility::string_t>& value)
{
    m_groups = value;
    m_groupsIsSet = true;
}

bool RegisterUserVM::groupsIsSet() const
{
    return m_groupsIsSet;
}

void RegisterUserVM::unsetgroups()
{
    m_groupsIsSet = false;
}
std::shared_ptr<AdminPermission> RegisterUserVM::getAdminPermission() const
{
    return m_adminPermission;
}

void RegisterUserVM::setAdminPermission(const std::shared_ptr<AdminPermission>& value)
{
    m_adminPermission = value;
    m_adminPermissionIsSet = true;
}

bool RegisterUserVM::adminPermissionIsSet() const
{
    return m_adminPermissionIsSet;
}

void RegisterUserVM::unsetadminPermission()
{
    m_adminPermissionIsSet = false;
}
utility::string_t RegisterUserVM::getName() const
{
    return m_name;
}

void RegisterUserVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool RegisterUserVM::nameIsSet() const
{
    return m_nameIsSet;
}

void RegisterUserVM::unsetname()
{
    m_nameIsSet = false;
}
utility::string_t RegisterUserVM::getUsername() const
{
    return m_username;
}

void RegisterUserVM::setUsername(const utility::string_t& value)
{
    m_username = value;
    m_usernameIsSet = true;
}

bool RegisterUserVM::usernameIsSet() const
{
    return m_usernameIsSet;
}

void RegisterUserVM::unsetusername()
{
    m_usernameIsSet = false;
}
utility::string_t RegisterUserVM::getEmail() const
{
    return m_email;
}

void RegisterUserVM::setEmail(const utility::string_t& value)
{
    m_email = value;
    m_emailIsSet = true;
}

bool RegisterUserVM::emailIsSet() const
{
    return m_emailIsSet;
}

void RegisterUserVM::unsetemail()
{
    m_emailIsSet = false;
}
utility::string_t RegisterUserVM::getPassword() const
{
    return m_password;
}

void RegisterUserVM::setPassword(const utility::string_t& value)
{
    m_password = value;
    m_passwordIsSet = true;
}

bool RegisterUserVM::passwordIsSet() const
{
    return m_passwordIsSet;
}

void RegisterUserVM::unsetpassword()
{
    m_passwordIsSet = false;
}
bool RegisterUserVM::isIsAdmin() const
{
    return m_isAdmin;
}

void RegisterUserVM::setIsAdmin(bool value)
{
    m_isAdmin = value;
    m_isAdminIsSet = true;
}

bool RegisterUserVM::isAdminIsSet() const
{
    return m_isAdminIsSet;
}

void RegisterUserVM::unsetisAdmin()
{
    m_isAdminIsSet = false;
}
utility::string_t RegisterUserVM::getProvider() const
{
    return m_provider;
}

void RegisterUserVM::setProvider(const utility::string_t& value)
{
    m_provider = value;
    m_providerIsSet = true;
}

bool RegisterUserVM::providerIsSet() const
{
    return m_providerIsSet;
}

void RegisterUserVM::unsetprovider()
{
    m_providerIsSet = false;
}
}
}
}


