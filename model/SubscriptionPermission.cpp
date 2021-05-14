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



#include "SubscriptionPermission.h"

namespace fastreport {
namespace cloud {
namespace models {




SubscriptionPermission::SubscriptionPermission()
{
    m_create = CreateEnum._0;
    m_createIsSet = false;
    m_r_delete = R_deleteEnum._0;
    m_r_deleteIsSet = false;
    m_execute = ExecuteEnum._0;
    m_executeIsSet = false;
    m_get = GetEnum._0;
    m_getIsSet = false;
    m_update = UpdateEnum._0;
    m_updateIsSet = false;
    m_administrate = AdministrateEnum._0;
    m_administrateIsSet = false;
}

SubscriptionPermission::~SubscriptionPermission()
{
}

void SubscriptionPermission::validate()
{
    // TODO: implement validation
}

web::json::value SubscriptionPermission::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_createIsSet)
    {
        val[utility::conversions::to_string_t("create")] = ModelBase::toJson(m_create);
    }
    if(m_r_deleteIsSet)
    {
        val[utility::conversions::to_string_t("delete")] = ModelBase::toJson(m_r_delete);
    }
    if(m_executeIsSet)
    {
        val[utility::conversions::to_string_t("execute")] = ModelBase::toJson(m_execute);
    }
    if(m_getIsSet)
    {
        val[utility::conversions::to_string_t("get")] = ModelBase::toJson(m_get);
    }
    if(m_updateIsSet)
    {
        val[utility::conversions::to_string_t("update")] = ModelBase::toJson(m_update);
    }
    if(m_administrateIsSet)
    {
        val[utility::conversions::to_string_t("administrate")] = ModelBase::toJson(m_administrate);
    }

    return val;
}

bool SubscriptionPermission::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_create;
            ok &= ModelBase::fromJson(fieldValue, refVal_create);
            setCreate(refVal_create);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_delete;
            ok &= ModelBase::fromJson(fieldValue, refVal_delete);
            setRDelete(refVal_delete);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_execute;
            ok &= ModelBase::fromJson(fieldValue, refVal_execute);
            setExecute(refVal_execute);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("get")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("get"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_get;
            ok &= ModelBase::fromJson(fieldValue, refVal_get);
            setGet(refVal_get);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_update;
            ok &= ModelBase::fromJson(fieldValue, refVal_update);
            setUpdate(refVal_update);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("administrate")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("administrate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_administrate;
            ok &= ModelBase::fromJson(fieldValue, refVal_administrate);
            setAdministrate(refVal_administrate);
        }
    }
    return ok;
}

void SubscriptionPermission::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_createIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("create"), m_create));
    }
    if(m_r_deleteIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("delete"), m_r_delete));
    }
    if(m_executeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("execute"), m_execute));
    }
    if(m_getIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("get"), m_get));
    }
    if(m_updateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("update"), m_update));
    }
    if(m_administrateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("administrate"), m_administrate));
    }
}

bool SubscriptionPermission::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("create")))
    {
        int32_t refVal_create;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("create")), refVal_create );
        setCreate(refVal_create);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("delete")))
    {
        int32_t refVal_delete;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("delete")), refVal_delete );
        setRDelete(refVal_delete);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("execute")))
    {
        int32_t refVal_execute;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("execute")), refVal_execute );
        setExecute(refVal_execute);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("get")))
    {
        int32_t refVal_get;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("get")), refVal_get );
        setGet(refVal_get);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("update")))
    {
        int32_t refVal_update;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("update")), refVal_update );
        setUpdate(refVal_update);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("administrate")))
    {
        int32_t refVal_administrate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("administrate")), refVal_administrate );
        setAdministrate(refVal_administrate);
    }
    return ok;
}

int32_t SubscriptionPermission::getCreate() const
{
    return m_create;
}

void SubscriptionPermission::setCreate(int32_t value)
{
    m_create = value;
    m_createIsSet = true;
}

bool SubscriptionPermission::createIsSet() const
{
    return m_createIsSet;
}

void SubscriptionPermission::unsetcreate()
{
    m_createIsSet = false;
}
int32_t SubscriptionPermission::getRDelete() const
{
    return m_r_delete;
}

void SubscriptionPermission::setRDelete(int32_t value)
{
    m_r_delete = value;
    m_r_deleteIsSet = true;
}

bool SubscriptionPermission::rDeleteIsSet() const
{
    return m_r_deleteIsSet;
}

void SubscriptionPermission::unsetr_delete()
{
    m_r_deleteIsSet = false;
}
int32_t SubscriptionPermission::getExecute() const
{
    return m_execute;
}

void SubscriptionPermission::setExecute(int32_t value)
{
    m_execute = value;
    m_executeIsSet = true;
}

bool SubscriptionPermission::executeIsSet() const
{
    return m_executeIsSet;
}

void SubscriptionPermission::unsetexecute()
{
    m_executeIsSet = false;
}
int32_t SubscriptionPermission::getGet() const
{
    return m_get;
}

void SubscriptionPermission::setGet(int32_t value)
{
    m_get = value;
    m_getIsSet = true;
}

bool SubscriptionPermission::getIsSet() const
{
    return m_getIsSet;
}

void SubscriptionPermission::unsetget()
{
    m_getIsSet = false;
}
int32_t SubscriptionPermission::getUpdate() const
{
    return m_update;
}

void SubscriptionPermission::setUpdate(int32_t value)
{
    m_update = value;
    m_updateIsSet = true;
}

bool SubscriptionPermission::updateIsSet() const
{
    return m_updateIsSet;
}

void SubscriptionPermission::unsetupdate()
{
    m_updateIsSet = false;
}
int32_t SubscriptionPermission::getAdministrate() const
{
    return m_administrate;
}

void SubscriptionPermission::setAdministrate(int32_t value)
{
    m_administrate = value;
    m_administrateIsSet = true;
}

bool SubscriptionPermission::administrateIsSet() const
{
    return m_administrateIsSet;
}

void SubscriptionPermission::unsetadministrate()
{
    m_administrateIsSet = false;
}
}
}
}


