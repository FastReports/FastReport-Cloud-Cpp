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



#include "CppRestOpenAPIClient/model/CreateDataSourceAdminVM.h"

namespace fastreport {
namespace cloud {
namespace models {



CreateDataSourceAdminVM::CreateDataSourceAdminVM()
{
    m_ownerId = utility::conversions::to_string_t("");
    m_ownerIdIsSet = false;
}

CreateDataSourceAdminVM::~CreateDataSourceAdminVM()
{
}

void CreateDataSourceAdminVM::validate()
{
    // TODO: implement validation
}

web::json::value CreateDataSourceAdminVM::toJson() const
{
    web::json::value val = this->CreateDataSourceVM::toJson();
    
    if(m_ownerIdIsSet)
    {
        val[utility::conversions::to_string_t(U("ownerId"))] = ModelBase::toJson(m_ownerId);
    }

    return val;
}

bool CreateDataSourceAdminVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CreateDataSourceVM::fromJson(val);
    
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
    return ok;
}

void CreateDataSourceAdminVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_connectionStringIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("connectionString")), m_connectionString));
    }
    if(m_subscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptionId")), m_subscriptionId));
    }
    if(m_connectionTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("connectionType")), m_connectionType));
    }
    if(m_selectCommandsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("selectCommands")), m_selectCommands));
    }
}

bool CreateDataSourceAdminVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("connectionString"))))
    {
        utility::string_t refVal_setConnectionString;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("connectionString"))), refVal_setConnectionString );
        setConnectionString(refVal_setConnectionString);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subscriptionId"))))
    {
        utility::string_t refVal_setSubscriptionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subscriptionId"))), refVal_setSubscriptionId );
        setSubscriptionId(refVal_setSubscriptionId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("connectionType"))))
    {
        std::shared_ptr<DataSourceConnectionType> refVal_setConnectionType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("connectionType"))), refVal_setConnectionType );
        setConnectionType(refVal_setConnectionType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("selectCommands"))))
    {
        std::vector<std::shared_ptr<DataSourceSelectCommandVM>> refVal_setSelectCommands;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("selectCommands"))), refVal_setSelectCommands );
        setSelectCommands(refVal_setSelectCommands);
    }
    return ok;
}

utility::string_t CreateDataSourceAdminVM::getOwnerId() const
{
    return m_ownerId;
}

void CreateDataSourceAdminVM::setOwnerId(const utility::string_t& value)
{
    m_ownerId = value;
    m_ownerIdIsSet = true;
}

bool CreateDataSourceAdminVM::ownerIdIsSet() const
{
    return m_ownerIdIsSet;
}

void CreateDataSourceAdminVM::unsetownerId()
{
    m_ownerIdIsSet = false;
}
}
}
}


