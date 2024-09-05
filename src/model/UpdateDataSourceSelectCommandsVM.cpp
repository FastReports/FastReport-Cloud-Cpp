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



#include "CppRestOpenAPIClient/model/UpdateDataSourceSelectCommandsVM.h"

namespace fastreport {
namespace cloud {
namespace models {



UpdateDataSourceSelectCommandsVM::UpdateDataSourceSelectCommandsVM()
{
    m_selectCommandsIsSet = false;
}

UpdateDataSourceSelectCommandsVM::~UpdateDataSourceSelectCommandsVM()
{
}

void UpdateDataSourceSelectCommandsVM::validate()
{
    // TODO: implement validation
}

web::json::value UpdateDataSourceSelectCommandsVM::toJson() const
{
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_selectCommandsIsSet)
    {
        val[utility::conversions::to_string_t(U("selectCommands"))] = ModelBase::toJson(m_selectCommands);
    }

    return val;
}

bool UpdateDataSourceSelectCommandsVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
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

void UpdateDataSourceSelectCommandsVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
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

bool UpdateDataSourceSelectCommandsVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
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

std::vector<std::shared_ptr<DataSourceSelectCommandVM>>& UpdateDataSourceSelectCommandsVM::getSelectCommands()
{
    return m_selectCommands;
}

void UpdateDataSourceSelectCommandsVM::setSelectCommands(const std::vector<std::shared_ptr<DataSourceSelectCommandVM>>& value)
{
    m_selectCommands = value;
    m_selectCommandsIsSet = true;
}

bool UpdateDataSourceSelectCommandsVM::selectCommandsIsSet() const
{
    return m_selectCommandsIsSet;
}

void UpdateDataSourceSelectCommandsVM::unsetselectCommands()
{
    m_selectCommandsIsSet = false;
}
}
}
}

