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



#include "CppRestOpenAPIClient/model/DataSourceVM.h"

namespace fastreport {
namespace cloud {
namespace models {



DataSourceVM::DataSourceVM()
{
    m_id = utility::conversions::to_string_t("");
    m_idIsSet = false;
    m_name = utility::conversions::to_string_t("");
    m_nameIsSet = false;
    m_connectionTypeIsSet = false;
    m_connectionString = utility::conversions::to_string_t("");
    m_connectionStringIsSet = false;
    m_dataStructure = utility::conversions::to_string_t("");
    m_dataStructureIsSet = false;
    m_subscriptionId = utility::conversions::to_string_t("");
    m_subscriptionIdIsSet = false;
    m_editedTime = utility::datetime();
    m_editedTimeIsSet = false;
    m_editorUserId = utility::conversions::to_string_t("");
    m_editorUserIdIsSet = false;
    m_createdTime = utility::datetime();
    m_createdTimeIsSet = false;
    m_creatorUserId = utility::conversions::to_string_t("");
    m_creatorUserIdIsSet = false;
    m_statusIsSet = false;
    m_errorMessage = utility::conversions::to_string_t("");
    m_errorMessageIsSet = false;
    m_selectCommandsIsSet = false;
}

DataSourceVM::~DataSourceVM()
{
}

void DataSourceVM::validate()
{
    // TODO: implement validation
}

web::json::value DataSourceVM::toJson() const
{
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_idIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_id);
    }
    if(m_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_name);
    }
    if(m_connectionTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("connectionType"))] = ModelBase::toJson(m_connectionType);
    }
    if(m_connectionStringIsSet)
    {
        val[utility::conversions::to_string_t(U("connectionString"))] = ModelBase::toJson(m_connectionString);
    }
    if(m_dataStructureIsSet)
    {
        val[utility::conversions::to_string_t(U("dataStructure"))] = ModelBase::toJson(m_dataStructure);
    }
    if(m_subscriptionIdIsSet)
    {
        val[utility::conversions::to_string_t(U("subscriptionId"))] = ModelBase::toJson(m_subscriptionId);
    }
    if(m_editedTimeIsSet)
    {
        val[utility::conversions::to_string_t(U("editedTime"))] = ModelBase::toJson(m_editedTime);
    }
    if(m_editorUserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("editorUserId"))] = ModelBase::toJson(m_editorUserId);
    }
    if(m_createdTimeIsSet)
    {
        val[utility::conversions::to_string_t(U("createdTime"))] = ModelBase::toJson(m_createdTime);
    }
    if(m_creatorUserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("creatorUserId"))] = ModelBase::toJson(m_creatorUserId);
    }
    if(m_statusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_status);
    }
    if(m_errorMessageIsSet)
    {
        val[utility::conversions::to_string_t(U("errorMessage"))] = ModelBase::toJson(m_errorMessage);
    }
    if(m_selectCommandsIsSet)
    {
        val[utility::conversions::to_string_t(U("selectCommands"))] = ModelBase::toJson(m_selectCommands);
    }

    return val;
}

bool DataSourceVM::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("connectionType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("connectionType")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DataSourceConnectionType> refVal_setConnectionType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setConnectionType);
            setConnectionType(refVal_setConnectionType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("connectionString"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("connectionString")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setConnectionString;
            ok &= ModelBase::fromJson(fieldValue, refVal_setConnectionString);
            setConnectionString(refVal_setConnectionString);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("dataStructure"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("dataStructure")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDataStructure;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDataStructure);
            setDataStructure(refVal_setDataStructure);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("subscriptionId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("subscriptionId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSubscriptionId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSubscriptionId);
            setSubscriptionId(refVal_setSubscriptionId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("editedTime"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("editedTime")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setEditedTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEditedTime);
            setEditedTime(refVal_setEditedTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("editorUserId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("editorUserId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEditorUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEditorUserId);
            setEditorUserId(refVal_setEditorUserId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("createdTime"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("createdTime")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setCreatedTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedTime);
            setCreatedTime(refVal_setCreatedTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("creatorUserId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("creatorUserId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCreatorUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatorUserId);
            setCreatorUserId(refVal_setCreatorUserId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DataSourceStatus> refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("errorMessage"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("errorMessage")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setErrorMessage;
            ok &= ModelBase::fromJson(fieldValue, refVal_setErrorMessage);
            setErrorMessage(refVal_setErrorMessage);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("selectCommands"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("selectCommands")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<DataSourceSelectCommandVM>> refVal_setSelectCommands;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSelectCommands);
            setSelectCommands(refVal_setSelectCommands);
        }
    }
    return ok;
}

void DataSourceVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_name));
    }
    if(m_connectionTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("connectionType")), m_connectionType));
    }
    if(m_connectionStringIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("connectionString")), m_connectionString));
    }
    if(m_dataStructureIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("dataStructure")), m_dataStructure));
    }
    if(m_subscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptionId")), m_subscriptionId));
    }
    if(m_editedTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("editedTime")), m_editedTime));
    }
    if(m_editorUserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("editorUserId")), m_editorUserId));
    }
    if(m_createdTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdTime")), m_createdTime));
    }
    if(m_creatorUserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("creatorUserId")), m_creatorUserId));
    }
    if(m_statusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_status));
    }
    if(m_errorMessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("errorMessage")), m_errorMessage));
    }
    if(m_selectCommandsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("selectCommands")), m_selectCommands));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool DataSourceVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("connectionType"))))
    {
        std::shared_ptr<DataSourceConnectionType> refVal_setConnectionType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("connectionType"))), refVal_setConnectionType );
        setConnectionType(refVal_setConnectionType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("connectionString"))))
    {
        utility::string_t refVal_setConnectionString;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("connectionString"))), refVal_setConnectionString );
        setConnectionString(refVal_setConnectionString);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("dataStructure"))))
    {
        utility::string_t refVal_setDataStructure;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("dataStructure"))), refVal_setDataStructure );
        setDataStructure(refVal_setDataStructure);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subscriptionId"))))
    {
        utility::string_t refVal_setSubscriptionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subscriptionId"))), refVal_setSubscriptionId );
        setSubscriptionId(refVal_setSubscriptionId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("editedTime"))))
    {
        utility::datetime refVal_setEditedTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("editedTime"))), refVal_setEditedTime );
        setEditedTime(refVal_setEditedTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("editorUserId"))))
    {
        utility::string_t refVal_setEditorUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("editorUserId"))), refVal_setEditorUserId );
        setEditorUserId(refVal_setEditorUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdTime"))))
    {
        utility::datetime refVal_setCreatedTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdTime"))), refVal_setCreatedTime );
        setCreatedTime(refVal_setCreatedTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("creatorUserId"))))
    {
        utility::string_t refVal_setCreatorUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("creatorUserId"))), refVal_setCreatorUserId );
        setCreatorUserId(refVal_setCreatorUserId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        std::shared_ptr<DataSourceStatus> refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("errorMessage"))))
    {
        utility::string_t refVal_setErrorMessage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("errorMessage"))), refVal_setErrorMessage );
        setErrorMessage(refVal_setErrorMessage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("selectCommands"))))
    {
        std::vector<std::shared_ptr<DataSourceSelectCommandVM>> refVal_setSelectCommands;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("selectCommands"))), refVal_setSelectCommands );
        setSelectCommands(refVal_setSelectCommands);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

utility::string_t DataSourceVM::getId() const
{
    return m_id;
}

void DataSourceVM::setId(const utility::string_t& value)
{
    m_id = value;
    m_idIsSet = true;
}

bool DataSourceVM::idIsSet() const
{
    return m_idIsSet;
}

void DataSourceVM::unsetid()
{
    m_idIsSet = false;
}
utility::string_t DataSourceVM::getName() const
{
    return m_name;
}

void DataSourceVM::setName(const utility::string_t& value)
{
    m_name = value;
    m_nameIsSet = true;
}

bool DataSourceVM::nameIsSet() const
{
    return m_nameIsSet;
}

void DataSourceVM::unsetname()
{
    m_nameIsSet = false;
}
std::shared_ptr<DataSourceConnectionType> DataSourceVM::getConnectionType() const
{
    return m_connectionType;
}

void DataSourceVM::setConnectionType(const std::shared_ptr<DataSourceConnectionType>& value)
{
    m_connectionType = value;
    m_connectionTypeIsSet = true;
}

bool DataSourceVM::connectionTypeIsSet() const
{
    return m_connectionTypeIsSet;
}

void DataSourceVM::unsetconnectionType()
{
    m_connectionTypeIsSet = false;
}
utility::string_t DataSourceVM::getConnectionString() const
{
    return m_connectionString;
}

void DataSourceVM::setConnectionString(const utility::string_t& value)
{
    m_connectionString = value;
    m_connectionStringIsSet = true;
}

bool DataSourceVM::connectionStringIsSet() const
{
    return m_connectionStringIsSet;
}

void DataSourceVM::unsetconnectionString()
{
    m_connectionStringIsSet = false;
}
utility::string_t DataSourceVM::getDataStructure() const
{
    return m_dataStructure;
}

void DataSourceVM::setDataStructure(const utility::string_t& value)
{
    m_dataStructure = value;
    m_dataStructureIsSet = true;
}

bool DataSourceVM::dataStructureIsSet() const
{
    return m_dataStructureIsSet;
}

void DataSourceVM::unsetdataStructure()
{
    m_dataStructureIsSet = false;
}
utility::string_t DataSourceVM::getSubscriptionId() const
{
    return m_subscriptionId;
}

void DataSourceVM::setSubscriptionId(const utility::string_t& value)
{
    m_subscriptionId = value;
    m_subscriptionIdIsSet = true;
}

bool DataSourceVM::subscriptionIdIsSet() const
{
    return m_subscriptionIdIsSet;
}

void DataSourceVM::unsetsubscriptionId()
{
    m_subscriptionIdIsSet = false;
}
utility::datetime DataSourceVM::getEditedTime() const
{
    return m_editedTime;
}

void DataSourceVM::setEditedTime(const utility::datetime& value)
{
    m_editedTime = value;
    m_editedTimeIsSet = true;
}

bool DataSourceVM::editedTimeIsSet() const
{
    return m_editedTimeIsSet;
}

void DataSourceVM::unseteditedTime()
{
    m_editedTimeIsSet = false;
}
utility::string_t DataSourceVM::getEditorUserId() const
{
    return m_editorUserId;
}

void DataSourceVM::setEditorUserId(const utility::string_t& value)
{
    m_editorUserId = value;
    m_editorUserIdIsSet = true;
}

bool DataSourceVM::editorUserIdIsSet() const
{
    return m_editorUserIdIsSet;
}

void DataSourceVM::unseteditorUserId()
{
    m_editorUserIdIsSet = false;
}
utility::datetime DataSourceVM::getCreatedTime() const
{
    return m_createdTime;
}

void DataSourceVM::setCreatedTime(const utility::datetime& value)
{
    m_createdTime = value;
    m_createdTimeIsSet = true;
}

bool DataSourceVM::createdTimeIsSet() const
{
    return m_createdTimeIsSet;
}

void DataSourceVM::unsetcreatedTime()
{
    m_createdTimeIsSet = false;
}
utility::string_t DataSourceVM::getCreatorUserId() const
{
    return m_creatorUserId;
}

void DataSourceVM::setCreatorUserId(const utility::string_t& value)
{
    m_creatorUserId = value;
    m_creatorUserIdIsSet = true;
}

bool DataSourceVM::creatorUserIdIsSet() const
{
    return m_creatorUserIdIsSet;
}

void DataSourceVM::unsetcreatorUserId()
{
    m_creatorUserIdIsSet = false;
}
std::shared_ptr<DataSourceStatus> DataSourceVM::getStatus() const
{
    return m_status;
}

void DataSourceVM::setStatus(const std::shared_ptr<DataSourceStatus>& value)
{
    m_status = value;
    m_statusIsSet = true;
}

bool DataSourceVM::statusIsSet() const
{
    return m_statusIsSet;
}

void DataSourceVM::unsetstatus()
{
    m_statusIsSet = false;
}
utility::string_t DataSourceVM::getErrorMessage() const
{
    return m_errorMessage;
}

void DataSourceVM::setErrorMessage(const utility::string_t& value)
{
    m_errorMessage = value;
    m_errorMessageIsSet = true;
}

bool DataSourceVM::errorMessageIsSet() const
{
    return m_errorMessageIsSet;
}

void DataSourceVM::unseterrorMessage()
{
    m_errorMessageIsSet = false;
}
std::vector<std::shared_ptr<DataSourceSelectCommandVM>>& DataSourceVM::getSelectCommands()
{
    return m_selectCommands;
}

void DataSourceVM::setSelectCommands(const std::vector<std::shared_ptr<DataSourceSelectCommandVM>>& value)
{
    m_selectCommands = value;
    m_selectCommandsIsSet = true;
}

bool DataSourceVM::selectCommandsIsSet() const
{
    return m_selectCommandsIsSet;
}

void DataSourceVM::unsetselectCommands()
{
    m_selectCommandsIsSet = false;
}
}
}
}


