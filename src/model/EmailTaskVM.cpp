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



#include "CppRestOpenAPIClient/model/EmailTaskVM.h"

namespace fastreport {
namespace cloud {
namespace models {



EmailTaskVM::EmailTaskVM()
{
    m_body = utility::conversions::to_string_t("");
    m_bodyIsSet = false;
    m_enableSsl = false;
    m_enableSslIsSet = false;
    m_from = utility::conversions::to_string_t("");
    m_fromIsSet = false;
    m_isBodyHtml = false;
    m_isBodyHtmlIsSet = false;
    m_port = 0;
    m_portIsSet = false;
    m_server = utility::conversions::to_string_t("");
    m_serverIsSet = false;
    m_subject = utility::conversions::to_string_t("");
    m_subjectIsSet = false;
    m_toIsSet = false;
    m_username = utility::conversions::to_string_t("");
    m_usernameIsSet = false;
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
    web::json::value val = this->TransportTaskBaseVM::toJson();
    
    if(m_bodyIsSet)
    {
        val[utility::conversions::to_string_t(U("body"))] = ModelBase::toJson(m_body);
    }
    if(m_enableSslIsSet)
    {
        val[utility::conversions::to_string_t(U("enableSsl"))] = ModelBase::toJson(m_enableSsl);
    }
    if(m_fromIsSet)
    {
        val[utility::conversions::to_string_t(U("from"))] = ModelBase::toJson(m_from);
    }
    if(m_isBodyHtmlIsSet)
    {
        val[utility::conversions::to_string_t(U("isBodyHtml"))] = ModelBase::toJson(m_isBodyHtml);
    }
    if(m_portIsSet)
    {
        val[utility::conversions::to_string_t(U("port"))] = ModelBase::toJson(m_port);
    }
    if(m_serverIsSet)
    {
        val[utility::conversions::to_string_t(U("server"))] = ModelBase::toJson(m_server);
    }
    if(m_subjectIsSet)
    {
        val[utility::conversions::to_string_t(U("subject"))] = ModelBase::toJson(m_subject);
    }
    if(m_toIsSet)
    {
        val[utility::conversions::to_string_t(U("to"))] = ModelBase::toJson(m_to);
    }
    if(m_usernameIsSet)
    {
        val[utility::conversions::to_string_t(U("username"))] = ModelBase::toJson(m_username);
    }

    return val;
}

bool EmailTaskVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->TransportTaskBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("body"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("body")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setBody;
            ok &= ModelBase::fromJson(fieldValue, refVal_setBody);
            setBody(refVal_setBody);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("enableSsl"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("enableSsl")));
        if(!fieldValue.is_null())
        {
            bool refVal_setEnableSsl;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEnableSsl);
            setEnableSsl(refVal_setEnableSsl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("from"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("from")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFrom;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFrom);
            setFrom(refVal_setFrom);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("isBodyHtml"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("isBodyHtml")));
        if(!fieldValue.is_null())
        {
            bool refVal_setIsBodyHtml;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIsBodyHtml);
            setIsBodyHtml(refVal_setIsBodyHtml);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("port"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("port")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setPort;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPort);
            setPort(refVal_setPort);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("server"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("server")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setServer;
            ok &= ModelBase::fromJson(fieldValue, refVal_setServer);
            setServer(refVal_setServer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("subject"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("subject")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSubject;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSubject);
            setSubject(refVal_setSubject);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("to"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("to")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setTo;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTo);
            setTo(refVal_setTo);
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
    return ok;
}

void EmailTaskVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_bodyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("body")), m_body));
    }
    if(m_enableSslIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("enableSsl")), m_enableSsl));
    }
    if(m_fromIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("from")), m_from));
    }
    if(m_isBodyHtmlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("isBodyHtml")), m_isBodyHtml));
    }
    if(m_portIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("port")), m_port));
    }
    if(m_serverIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("server")), m_server));
    }
    if(m_subjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subject")), m_subject));
    }
    if(m_toIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("to")), m_to));
    }
    if(m_usernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("username")), m_username));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
    if(m_inputFileIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("inputFile")), m_inputFile));
    }
    if(m_cronExpressionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cronExpression")), m_cronExpression));
    }
    if(m_startsOnIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("startsOn")), m_startsOn));
    }
    if(m_endsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ends")), m_ends));
    }
    if(m_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_id));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_recurrentRunTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("recurrentRunTime")), m_recurrentRunTime));
    }
    if(m_recurrentWasRunTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("recurrentWasRunTime")), m_recurrentWasRunTime));
    }
    if(m_subscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptionId")), m_subscriptionId));
    }
}

bool EmailTaskVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("body"))))
    {
        utility::string_t refVal_setBody;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("body"))), refVal_setBody );
        setBody(refVal_setBody);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("enableSsl"))))
    {
        bool refVal_setEnableSsl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("enableSsl"))), refVal_setEnableSsl );
        setEnableSsl(refVal_setEnableSsl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("from"))))
    {
        utility::string_t refVal_setFrom;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("from"))), refVal_setFrom );
        setFrom(refVal_setFrom);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("isBodyHtml"))))
    {
        bool refVal_setIsBodyHtml;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("isBodyHtml"))), refVal_setIsBodyHtml );
        setIsBodyHtml(refVal_setIsBodyHtml);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("port"))))
    {
        int32_t refVal_setPort;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("port"))), refVal_setPort );
        setPort(refVal_setPort);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("server"))))
    {
        utility::string_t refVal_setServer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("server"))), refVal_setServer );
        setServer(refVal_setServer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subject"))))
    {
        utility::string_t refVal_setSubject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subject"))), refVal_setSubject );
        setSubject(refVal_setSubject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("to"))))
    {
        std::vector<utility::string_t> refVal_setTo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("to"))), refVal_setTo );
        setTo(refVal_setTo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("username"))))
    {
        utility::string_t refVal_setUsername;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("username"))), refVal_setUsername );
        setUsername(refVal_setUsername);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("inputFile"))))
    {
        std::shared_ptr<InputFileVM> refVal_setInputFile;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("inputFile"))), refVal_setInputFile );
        setInputFile(refVal_setInputFile);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cronExpression"))))
    {
        utility::string_t refVal_setCronExpression;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cronExpression"))), refVal_setCronExpression );
        setCronExpression(refVal_setCronExpression);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("startsOn"))))
    {
        utility::datetime refVal_setStartsOn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("startsOn"))), refVal_setStartsOn );
        setStartsOn(refVal_setStartsOn);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ends"))))
    {
        std::shared_ptr<TaskEnd> refVal_setEnds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ends"))), refVal_setEnds );
        setEnds(refVal_setEnds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("recurrentRunTime"))))
    {
        utility::datetime refVal_setRecurrentRunTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("recurrentRunTime"))), refVal_setRecurrentRunTime );
        setRecurrentRunTime(refVal_setRecurrentRunTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("recurrentWasRunTime"))))
    {
        utility::datetime refVal_setRecurrentWasRunTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("recurrentWasRunTime"))), refVal_setRecurrentWasRunTime );
        setRecurrentWasRunTime(refVal_setRecurrentWasRunTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subscriptionId"))))
    {
        utility::string_t refVal_setSubscriptionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subscriptionId"))), refVal_setSubscriptionId );
        setSubscriptionId(refVal_setSubscriptionId);
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
}
}
}


