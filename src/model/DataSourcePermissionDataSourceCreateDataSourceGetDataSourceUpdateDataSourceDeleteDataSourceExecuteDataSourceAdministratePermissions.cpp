/**
 * FastReport Cloud
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOpenAPIClient/model/DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions.h"

namespace fastreport {
namespace cloud {
namespace models {



DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions()
{
    m_ownerId = utility::conversions::to_string_t("");
    m_ownerIdIsSet = false;
    m_ownerIsSet = false;
    m_groupsIsSet = false;
    m_otherIsSet = false;
    m_anonIsSet = false;
}

DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::~DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions()
{
}

void DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::validate()
{
    // TODO: implement validation
}

web::json::value DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ownerIdIsSet)
    {
        val[utility::conversions::to_string_t(U("ownerId"))] = ModelBase::toJson(m_ownerId);
    }
    if(m_ownerIsSet)
    {
        val[utility::conversions::to_string_t(U("owner"))] = ModelBase::toJson(m_owner);
    }
    if(m_groupsIsSet)
    {
        val[utility::conversions::to_string_t(U("groups"))] = ModelBase::toJson(m_groups);
    }
    if(m_otherIsSet)
    {
        val[utility::conversions::to_string_t(U("other"))] = ModelBase::toJson(m_other);
    }
    if(m_anonIsSet)
    {
        val[utility::conversions::to_string_t(U("anon"))] = ModelBase::toJson(m_anon);
    }

    return val;
}

bool DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("ownerId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ownerId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setOwnerId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOwnerId);
            setOwnerId(refVal_setOwnerId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("owner"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("owner")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DataSourcePermission> refVal_setOwner;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOwner);
            setOwner(refVal_setOwner);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("groups"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("groups")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, std::shared_ptr<DataSourcePermission>> refVal_setGroups;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGroups);
            setGroups(refVal_setGroups);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("other"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("other")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DataSourcePermission> refVal_setOther;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOther);
            setOther(refVal_setOther);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("anon"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("anon")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DataSourcePermission> refVal_setAnon;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAnon);
            setAnon(refVal_setAnon);
        }
    }
    return ok;
}

void DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ownerIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ownerId")), m_ownerId));
    }
    if(m_ownerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("owner")), m_owner));
    }
    if(m_groupsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("groups")), m_groups));
    }
    if(m_otherIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("other")), m_other));
    }
    if(m_anonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("anon")), m_anon));
    }
}

bool DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("ownerId"))))
    {
        utility::string_t refVal_setOwnerId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ownerId"))), refVal_setOwnerId );
        setOwnerId(refVal_setOwnerId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("owner"))))
    {
        std::shared_ptr<DataSourcePermission> refVal_setOwner;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("owner"))), refVal_setOwner );
        setOwner(refVal_setOwner);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("groups"))))
    {
        std::map<utility::string_t, std::shared_ptr<DataSourcePermission>> refVal_setGroups;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("groups"))), refVal_setGroups );
        setGroups(refVal_setGroups);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("other"))))
    {
        std::shared_ptr<DataSourcePermission> refVal_setOther;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("other"))), refVal_setOther );
        setOther(refVal_setOther);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("anon"))))
    {
        std::shared_ptr<DataSourcePermission> refVal_setAnon;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("anon"))), refVal_setAnon );
        setAnon(refVal_setAnon);
    }
    return ok;
}

utility::string_t DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::getOwnerId() const
{
    return m_ownerId;
}

void DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::setOwnerId(const utility::string_t& value)
{
    m_ownerId = value;
    m_ownerIdIsSet = true;
}

bool DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::ownerIdIsSet() const
{
    return m_ownerIdIsSet;
}

void DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::unsetownerId()
{
    m_ownerIdIsSet = false;
}
std::shared_ptr<DataSourcePermission> DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::getOwner() const
{
    return m_owner;
}

void DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::setOwner(const std::shared_ptr<DataSourcePermission>& value)
{
    m_owner = value;
    m_ownerIsSet = true;
}

bool DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::ownerIsSet() const
{
    return m_ownerIsSet;
}

void DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::unsetowner()
{
    m_ownerIsSet = false;
}
std::map<utility::string_t, std::shared_ptr<DataSourcePermission>>& DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::getGroups()
{
    return m_groups;
}

void DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::setGroups(const std::map<utility::string_t, std::shared_ptr<DataSourcePermission>>& value)
{
    m_groups = value;
    m_groupsIsSet = true;
}

bool DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::groupsIsSet() const
{
    return m_groupsIsSet;
}

void DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::unsetgroups()
{
    m_groupsIsSet = false;
}
std::shared_ptr<DataSourcePermission> DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::getOther() const
{
    return m_other;
}

void DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::setOther(const std::shared_ptr<DataSourcePermission>& value)
{
    m_other = value;
    m_otherIsSet = true;
}

bool DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::otherIsSet() const
{
    return m_otherIsSet;
}

void DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::unsetother()
{
    m_otherIsSet = false;
}
std::shared_ptr<DataSourcePermission> DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::getAnon() const
{
    return m_anon;
}

void DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::setAnon(const std::shared_ptr<DataSourcePermission>& value)
{
    m_anon = value;
    m_anonIsSet = true;
}

bool DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::anonIsSet() const
{
    return m_anonIsSet;
}

void DataSourcePermissionDataSourceCreateDataSourceGetDataSourceUpdateDataSourceDeleteDataSourceExecuteDataSourceAdministratePermissions::unsetanon()
{
    m_anonIsSet = false;
}
}
}
}


