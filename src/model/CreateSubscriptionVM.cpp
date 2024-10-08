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



#include "CppRestOpenAPIClient/model/CreateSubscriptionVM.h"

namespace fastreport {
namespace cloud {
namespace models {



CreateSubscriptionVM::CreateSubscriptionVM()
{
    m_planId = utility::conversions::to_string_t("");
    m_planIdIsSet = false;
    m_start = utility::datetime();
    m_startIsSet = false;
    m_end = utility::datetime();
    m_endIsSet = false;
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_userId = utility::conversions::to_string_t("");
    m_userIdIsSet = false;
    m_tagsIsSet = false;
}

CreateSubscriptionVM::~CreateSubscriptionVM()
{
}

void CreateSubscriptionVM::validate()
{
    // TODO: implement validation
}

web::json::value CreateSubscriptionVM::toJson() const
{
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_planIdIsSet)
    {
        val[utility::conversions::to_string_t(U("planId"))] = ModelBase::toJson(m_planId);
    }
    if(m_startIsSet)
    {
        val[utility::conversions::to_string_t(U("start"))] = ModelBase::toJson(m_start);
    }
    if(m_endIsSet)
    {
        val[utility::conversions::to_string_t(U("end"))] = ModelBase::toJson(m_end);
    }
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_name);
    }
    if(m_userIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_userId);
    }
    if(m_tagsIsSet)
    {
        val[utility::conversions::to_string_t(U("tags"))] = ModelBase::toJson(m_tags);
    }

    return val;
}

bool CreateSubscriptionVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("planId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("planId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPlanId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPlanId);
            setPlanId(refVal_setPlanId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("start"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("start")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setStart;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStart);
            setStart(refVal_setStart);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("end"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("end")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setEnd;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEnd);
            setEnd(refVal_setEnd);
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
    if(val.has_field(utility::conversions::to_string_t(U("userId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUserId);
            setUserId(refVal_setUserId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tags"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tags")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setTags;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTags);
            setTags(refVal_setTags);
        }
    }
    return ok;
}

void CreateSubscriptionVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_planIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("planId")), m_planId));
    }
    if(m_startIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("start")), m_start));
    }
    if(m_endIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("end")), m_end));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_userIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_userId));
    }
    if(m_tagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tags")), m_tags));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool CreateSubscriptionVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("planId"))))
    {
        utility::string_t refVal_setPlanId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("planId"))), refVal_setPlanId );
        setPlanId(refVal_setPlanId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("start"))))
    {
        utility::datetime refVal_setStart;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("start"))), refVal_setStart );
        setStart(refVal_setStart);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("end"))))
    {
        utility::datetime refVal_setEnd;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("end"))), refVal_setEnd );
        setEnd(refVal_setEnd);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userId"))))
    {
        utility::string_t refVal_setUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userId"))), refVal_setUserId );
        setUserId(refVal_setUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tags"))))
    {
        std::vector<utility::string_t> refVal_setTags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tags"))), refVal_setTags );
        setTags(refVal_setTags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

utility::string_t CreateSubscriptionVM::getPlanId() const
{
    return m_planId;
}

void CreateSubscriptionVM::setPlanId(const utility::string_t& value)
{
    m_planId = value;
    m_planIdIsSet = true;
}

bool CreateSubscriptionVM::planIdIsSet() const
{
    return m_planIdIsSet;
}

void CreateSubscriptionVM::unsetplanId()
{
    m_planIdIsSet = false;
}
utility::datetime CreateSubscriptionVM::getStart() const
{
    return m_start;
}

void CreateSubscriptionVM::setStart(const utility::datetime& value)
{
    m_start = value;
    m_startIsSet = true;
}

bool CreateSubscriptionVM::startIsSet() const
{
    return m_startIsSet;
}

void CreateSubscriptionVM::unsetstart()
{
    m_startIsSet = false;
}
utility::datetime CreateSubscriptionVM::getEnd() const
{
    return m_end;
}

void CreateSubscriptionVM::setEnd(const utility::datetime& value)
{
    m_end = value;
    m_endIsSet = true;
}

bool CreateSubscriptionVM::endIsSet() const
{
    return m_endIsSet;
}

void CreateSubscriptionVM::unsetend()
{
    m_endIsSet = false;
}
utility::string_t CreateSubscriptionVM::getName() const
{
    return m_name;
}

void CreateSubscriptionVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool CreateSubscriptionVM::nameIsSet() const
{
    return m_nameIsSet;
}

void CreateSubscriptionVM::unsetname()
{
    m_nameIsSet = false;
}
utility::string_t CreateSubscriptionVM::getUserId() const
{
    return m_userId;
}

void CreateSubscriptionVM::setUserId(const utility::string_t& value)
{
    m_userId = value;
    m_userIdIsSet = true;
}

bool CreateSubscriptionVM::userIdIsSet() const
{
    return m_userIdIsSet;
}

void CreateSubscriptionVM::unsetuserId()
{
    m_userIdIsSet = false;
}
std::vector<utility::string_t>& CreateSubscriptionVM::getTags()
{
    return m_tags;
}

void CreateSubscriptionVM::setTags(const std::vector<utility::string_t>& value)
{
    m_tags = value;
    m_tagsIsSet = true;
}

bool CreateSubscriptionVM::tagsIsSet() const
{
    return m_tagsIsSet;
}

void CreateSubscriptionVM::unsettags()
{
    m_tagsIsSet = false;
}
}
}
}


