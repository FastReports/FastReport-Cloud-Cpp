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



#include "EmailTaskVM.h"

namespace fastreport {
namespace cloud {
namespace models {




EmailTaskVM::EmailTaskVM()
{
    m_body = utility::conversions::to_string_t("");
    m_bodyIsSet = false;
    m_isBodyHtml = false;
    m_isBodyHtmlIsSet = false;
    m_subject = utility::conversions::to_string_t("");
    m_subjectIsSet = false;
    m_toIsSet = false;
    m_from = utility::conversions::to_string_t("");
    m_fromIsSet = false;
    m_username = utility::conversions::to_string_t("");
    m_usernameIsSet = false;
    m_server = utility::conversions::to_string_t("");
    m_serverIsSet = false;
    m_port = 0;
    m_portIsSet = false;
    m_enableSsl = false;
    m_enableSslIsSet = false;
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_subscriptionId = utility::conversions::to_string_t("");
    m_subscriptionIdIsSet = false;
    m_typeIsSet = false;
}

EmailTaskVM::~EmailTaskVM()
{
}

void EmailTaskVM::validate()
{
    // TODO: implement validation
}

web::json::value EmailTaskVM::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_bodyIsSet)
    {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(m_body);
    }
    if(m_isBodyHtmlIsSet)
    {
        val[utility::conversions::to_string_t("isBodyHtml")] = ModelBase::toJson(m_isBodyHtml);
    }
    if(m_subjectIsSet)
    {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(m_subject);
    }
    if(m_toIsSet)
    {
        val[utility::conversions::to_string_t("to")] = ModelBase::toJson(m_to);
    }
    if(m_fromIsSet)
    {
        val[utility::conversions::to_string_t("from")] = ModelBase::toJson(m_from);
    }
    if(m_usernameIsSet)
    {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(m_username);
    }
    if(m_serverIsSet)
    {
        val[utility::conversions::to_string_t("server")] = ModelBase::toJson(m_server);
    }
    if(m_portIsSet)
    {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(m_port);
    }
    if(m_enableSslIsSet)
    {
        val[utility::conversions::to_string_t("enableSsl")] = ModelBase::toJson(m_enableSsl);
    }
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_name);
    }
    if(m_subscriptionIdIsSet)
    {
        val[utility::conversions::to_string_t("subscriptionId")] = ModelBase::toJson(m_subscriptionId);
    }
    if(m_typeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_type);
    }

    return val;
}

bool EmailTaskVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_body;
            ok &= ModelBase::fromJson(fieldValue, refVal_body);
            setBody(refVal_body);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isBodyHtml")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isBodyHtml"));
        if(!fieldValue.is_null())
        {
            bool refVal_isBodyHtml;
            ok &= ModelBase::fromJson(fieldValue, refVal_isBodyHtml);
            setIsBodyHtml(refVal_isBodyHtml);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_subject;
            ok &= ModelBase::fromJson(fieldValue, refVal_subject);
            setSubject(refVal_subject);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_to;
            ok &= ModelBase::fromJson(fieldValue, refVal_to);
            setTo(refVal_to);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("from")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_from;
            ok &= ModelBase::fromJson(fieldValue, refVal_from);
            setFrom(refVal_from);
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
    if(val.has_field(utility::conversions::to_string_t("server")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_server;
            ok &= ModelBase::fromJson(fieldValue, refVal_server);
            setServer(refVal_server);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_port;
            ok &= ModelBase::fromJson(fieldValue, refVal_port);
            setPort(refVal_port);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableSsl")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableSsl"));
        if(!fieldValue.is_null())
        {
            bool refVal_enableSsl;
            ok &= ModelBase::fromJson(fieldValue, refVal_enableSsl);
            setEnableSsl(refVal_enableSsl);
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
    if(val.has_field(utility::conversions::to_string_t("subscriptionId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriptionId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_subscriptionId;
            ok &= ModelBase::fromJson(fieldValue, refVal_subscriptionId);
            setSubscriptionId(refVal_subscriptionId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<TaskType> refVal_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_type);
            setType(refVal_type);
        }
    }
    return ok;
}

void EmailTaskVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_bodyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("body"), m_body));
    }
    if(m_isBodyHtmlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isBodyHtml"), m_isBodyHtml));
    }
    if(m_subjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subject"), m_subject));
    }
    if(m_toIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("to"), m_to));
    }
    if(m_fromIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("from"), m_from));
    }
    if(m_usernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("username"), m_username));
    }
    if(m_serverIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("server"), m_server));
    }
    if(m_portIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("port"), m_port));
    }
    if(m_enableSslIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enableSsl"), m_enableSsl));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_name));
    }
    if(m_subscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subscriptionId"), m_subscriptionId));
    }
    if(m_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_type));
    }
}

bool EmailTaskVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("body")))
    {
        utility::string_t refVal_body;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("body")), refVal_body );
        setBody(refVal_body);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isBodyHtml")))
    {
        bool refVal_isBodyHtml;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isBodyHtml")), refVal_isBodyHtml );
        setIsBodyHtml(refVal_isBodyHtml);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subject")))
    {
        utility::string_t refVal_subject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subject")), refVal_subject );
        setSubject(refVal_subject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("to")))
    {
        std::vector<utility::string_t> refVal_to;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("to")), refVal_to );
        setTo(refVal_to);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("from")))
    {
        utility::string_t refVal_from;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("from")), refVal_from );
        setFrom(refVal_from);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("username")))
    {
        utility::string_t refVal_username;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("username")), refVal_username );
        setUsername(refVal_username);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("server")))
    {
        utility::string_t refVal_server;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("server")), refVal_server );
        setServer(refVal_server);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("port")))
    {
        int32_t refVal_port;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("port")), refVal_port );
        setPort(refVal_port);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("enableSsl")))
    {
        bool refVal_enableSsl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("enableSsl")), refVal_enableSsl );
        setEnableSsl(refVal_enableSsl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subscriptionId")))
    {
        utility::string_t refVal_subscriptionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subscriptionId")), refVal_subscriptionId );
        setSubscriptionId(refVal_subscriptionId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        std::shared_ptr<TaskType> refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("type")), refVal_type );
        setType(refVal_type);
    }
    return ok;
}

utility::string_t EmailTaskVM::getBody() const
{
    return m_body;
}

void EmailTaskVM::setBody(const utility::string_t& value)
{
    m_body = value;
    m_bodyIsSet = true;
}

bool EmailTaskVM::bodyIsSet() const
{
    return m_bodyIsSet;
}

void EmailTaskVM::unsetbody()
{
    m_bodyIsSet = false;
}
bool EmailTaskVM::isIsBodyHtml() const
{
    return m_isBodyHtml;
}

void EmailTaskVM::setIsBodyHtml(bool value)
{
    m_isBodyHtml = value;
    m_isBodyHtmlIsSet = true;
}

bool EmailTaskVM::isBodyHtmlIsSet() const
{
    return m_isBodyHtmlIsSet;
}

void EmailTaskVM::unsetisBodyHtml()
{
    m_isBodyHtmlIsSet = false;
}
utility::string_t EmailTaskVM::getSubject() const
{
    return m_subject;
}

void EmailTaskVM::setSubject(const utility::string_t& value)
{
    m_subject = value;
    m_subjectIsSet = true;
}

bool EmailTaskVM::subjectIsSet() const
{
    return m_subjectIsSet;
}

void EmailTaskVM::unsetsubject()
{
    m_subjectIsSet = false;
}
std::vector<utility::string_t>& EmailTaskVM::getTo()
{
    return m_to;
}

void EmailTaskVM::setTo(const std::vector<utility::string_t>& value)
{
    m_to = value;
    m_toIsSet = true;
}

bool EmailTaskVM::toIsSet() const
{
    return m_toIsSet;
}

void EmailTaskVM::unsetto()
{
    m_toIsSet = false;
}
utility::string_t EmailTaskVM::getFrom() const
{
    return m_from;
}

void EmailTaskVM::setFrom(const utility::string_t& value)
{
    m_from = value;
    m_fromIsSet = true;
}

bool EmailTaskVM::fromIsSet() const
{
    return m_fromIsSet;
}

void EmailTaskVM::unsetfrom()
{
    m_fromIsSet = false;
}
utility::string_t EmailTaskVM::getUsername() const
{
    return m_username;
}

void EmailTaskVM::setUsername(const utility::string_t& value)
{
    m_username = value;
    m_usernameIsSet = true;
}

bool EmailTaskVM::usernameIsSet() const
{
    return m_usernameIsSet;
}

void EmailTaskVM::unsetusername()
{
    m_usernameIsSet = false;
}
utility::string_t EmailTaskVM::getServer() const
{
    return m_server;
}

void EmailTaskVM::setServer(const utility::string_t& value)
{
    m_server = value;
    m_serverIsSet = true;
}

bool EmailTaskVM::serverIsSet() const
{
    return m_serverIsSet;
}

void EmailTaskVM::unsetserver()
{
    m_serverIsSet = false;
}
int32_t EmailTaskVM::getPort() const
{
    return m_port;
}

void EmailTaskVM::setPort(int32_t value)
{
    m_port = value;
    m_portIsSet = true;
}

bool EmailTaskVM::portIsSet() const
{
    return m_portIsSet;
}

void EmailTaskVM::unsetport()
{
    m_portIsSet = false;
}
bool EmailTaskVM::isEnableSsl() const
{
    return m_enableSsl;
}

void EmailTaskVM::setEnableSsl(bool value)
{
    m_enableSsl = value;
    m_enableSslIsSet = true;
}

bool EmailTaskVM::enableSslIsSet() const
{
    return m_enableSslIsSet;
}

void EmailTaskVM::unsetenableSsl()
{
    m_enableSslIsSet = false;
}
utility::string_t EmailTaskVM::getName() const
{
    return m_name;
}

void EmailTaskVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool EmailTaskVM::nameIsSet() const
{
    return m_nameIsSet;
}

void EmailTaskVM::unsetname()
{
    m_nameIsSet = false;
}
utility::string_t EmailTaskVM::getSubscriptionId() const
{
    return m_subscriptionId;
}

void EmailTaskVM::setSubscriptionId(const utility::string_t& value)
{
    m_subscriptionId = value;
    m_subscriptionIdIsSet = true;
}

bool EmailTaskVM::subscriptionIdIsSet() const
{
    return m_subscriptionIdIsSet;
}

void EmailTaskVM::unsetsubscriptionId()
{
    m_subscriptionIdIsSet = false;
}
std::shared_ptr<TaskType> EmailTaskVM::getType() const
{
    return m_type;
}

void EmailTaskVM::setType(const std::shared_ptr<TaskType>& value)
{
    m_type = value;
    m_typeIsSet = true;
}

bool EmailTaskVM::typeIsSet() const
{
    return m_typeIsSet;
}

void EmailTaskVM::unsettype()
{
    m_typeIsSet = false;
}
}
}
}

