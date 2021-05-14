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



#include "UserProfileUpdateVM.h"

namespace fastreport {
namespace cloud {
namespace models {




UserProfileUpdateVM::UserProfileUpdateVM()
{
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_username = utility::conversions::to_string_t("");
    m_usernameIsSet = false;
    m_email = utility::conversions::to_string_t("");
    m_emailIsSet = false;
    m_passwordNew = utility::conversions::to_string_t("");
    m_passwordNewIsSet = false;
    m_passwordNew2 = utility::conversions::to_string_t("");
    m_passwordNew2IsSet = false;
}

UserProfileUpdateVM::~UserProfileUpdateVM()
{
}

void UserProfileUpdateVM::validate()
{
    // TODO: implement validation
}

web::json::value UserProfileUpdateVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_name);
    }
    if(m_usernameIsSet)
    {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(m_username);
    }
    if(m_emailIsSet)
    {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(m_email);
    }
    if(m_passwordNewIsSet)
    {
        val[utility::conversions::to_string_t("passwordNew")] = ModelBase::toJson(m_passwordNew);
    }
    if(m_passwordNew2IsSet)
    {
        val[utility::conversions::to_string_t("passwordNew2")] = ModelBase::toJson(m_passwordNew2);
    }

    return val;
}

bool UserProfileUpdateVM::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("username")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_username;
            ok &= ModelBase::fromJson(fieldValue, refVal_username);
            setUsername(refVal_username);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_email;
            ok &= ModelBase::fromJson(fieldValue, refVal_email);
            setEmail(refVal_email);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("passwordNew")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("passwordNew"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_passwordNew;
            ok &= ModelBase::fromJson(fieldValue, refVal_passwordNew);
            setPasswordNew(refVal_passwordNew);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("passwordNew2")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("passwordNew2"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_passwordNew2;
            ok &= ModelBase::fromJson(fieldValue, refVal_passwordNew2);
            setPasswordNew2(refVal_passwordNew2);
        }
    }
    return ok;
}

void UserProfileUpdateVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_usernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("username"), m_username));
    }
    if(m_emailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("email"), m_email));
    }
    if(m_passwordNewIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("passwordNew"), m_passwordNew));
    }
    if(m_passwordNew2IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("passwordNew2"), m_passwordNew2));
    }
}

bool UserProfileUpdateVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("username")))
    {
        utility::string_t refVal_username;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("username")), refVal_username );
        setUsername(refVal_username);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("email")))
    {
        utility::string_t refVal_email;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("email")), refVal_email );
        setEmail(refVal_email);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("passwordNew")))
    {
        utility::string_t refVal_passwordNew;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("passwordNew")), refVal_passwordNew );
        setPasswordNew(refVal_passwordNew);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("passwordNew2")))
    {
        utility::string_t refVal_passwordNew2;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("passwordNew2")), refVal_passwordNew2 );
        setPasswordNew2(refVal_passwordNew2);
    }
    return ok;
}

utility::string_t UserProfileUpdateVM::getName() const
{
    return m_name;
}

void UserProfileUpdateVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool UserProfileUpdateVM::nameIsSet() const
{
    return m_nameIsSet;
}

void UserProfileUpdateVM::unsetname()
{
    m_nameIsSet = false;
}
utility::string_t UserProfileUpdateVM::getUsername() const
{
    return m_username;
}

void UserProfileUpdateVM::setUsername(const utility::string_t& value)
{
    m_username = value;
    m_usernameIsSet = true;
}

bool UserProfileUpdateVM::usernameIsSet() const
{
    return m_usernameIsSet;
}

void UserProfileUpdateVM::unsetusername()
{
    m_usernameIsSet = false;
}
utility::string_t UserProfileUpdateVM::getEmail() const
{
    return m_email;
}

void UserProfileUpdateVM::setEmail(const utility::string_t& value)
{
    m_email = value;
    m_emailIsSet = true;
}

bool UserProfileUpdateVM::emailIsSet() const
{
    return m_emailIsSet;
}

void UserProfileUpdateVM::unsetemail()
{
    m_emailIsSet = false;
}
utility::string_t UserProfileUpdateVM::getPasswordNew() const
{
    return m_passwordNew;
}

void UserProfileUpdateVM::setPasswordNew(const utility::string_t& value)
{
    m_passwordNew = value;
    m_passwordNewIsSet = true;
}

bool UserProfileUpdateVM::passwordNewIsSet() const
{
    return m_passwordNewIsSet;
}

void UserProfileUpdateVM::unsetpasswordNew()
{
    m_passwordNewIsSet = false;
}
utility::string_t UserProfileUpdateVM::getPasswordNew2() const
{
    return m_passwordNew2;
}

void UserProfileUpdateVM::setPasswordNew2(const utility::string_t& value)
{
    m_passwordNew2 = value;
    m_passwordNew2IsSet = true;
}

bool UserProfileUpdateVM::passwordNew2IsSet() const
{
    return m_passwordNew2IsSet;
}

void UserProfileUpdateVM::unsetpasswordNew2()
{
    m_passwordNew2IsSet = false;
}
}
}
}


