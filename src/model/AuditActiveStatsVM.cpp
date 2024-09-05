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



#include "CppRestOpenAPIClient/model/AuditActiveStatsVM.h"

namespace fastreport {
namespace cloud {
namespace models {



AuditActiveStatsVM::AuditActiveStatsVM()
{
    m_itemsIsSet = false;
}

AuditActiveStatsVM::~AuditActiveStatsVM()
{
}

void AuditActiveStatsVM::validate()
{
    // TODO: implement validation
}

web::json::value AuditActiveStatsVM::toJson() const
{
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_itemsIsSet)
    {
        val[utility::conversions::to_string_t(U("items"))] = ModelBase::toJson(m_items);
    }

    return val;
}

bool AuditActiveStatsVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("items"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("items")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, int32_t> refVal_setItems;
            ok &= ModelBase::fromJson(fieldValue, refVal_setItems);
            setItems(refVal_setItems);
        }
    }
    return ok;
}

void AuditActiveStatsVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_itemsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("items")), m_items));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool AuditActiveStatsVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("items"))))
    {
        std::map<utility::string_t, int32_t> refVal_setItems;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("items"))), refVal_setItems );
        setItems(refVal_setItems);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

std::map<utility::string_t, int32_t>& AuditActiveStatsVM::getItems()
{
    return m_items;
}

void AuditActiveStatsVM::setItems(std::map<utility::string_t, int32_t> value)
{
    m_items = value;
    m_itemsIsSet = true;
}

bool AuditActiveStatsVM::itemsIsSet() const
{
    return m_itemsIsSet;
}

void AuditActiveStatsVM::unsetitems()
{
    m_itemsIsSet = false;
}
}
}
}

