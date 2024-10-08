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



#include "CppRestOpenAPIClient/model/AnalysisResultVM.h"

namespace fastreport {
namespace cloud {
namespace models {



AnalysisResultVM::AnalysisResultVM()
{
    m_levelIsSet = false;
    m_detail = utility::conversions::to_string_t("");
    m_detailIsSet = false;
    m_id = utility::conversions::to_string_t("");
    m_idIsSet = false;
    m_subscriptionId = utility::conversions::to_string_t("");
    m_subscriptionIdIsSet = false;
    m_fileId = utility::conversions::to_string_t("");
    m_fileIdIsSet = false;
    m_collectionName = utility::conversions::to_string_t("");
    m_collectionNameIsSet = false;
    m_typeIsSet = false;
    m_signature = utility::conversions::to_string_t("");
    m_signatureIsSet = false;
    m_newSize = 0L;
    m_newSizeIsSet = false;
}

AnalysisResultVM::~AnalysisResultVM()
{
}

void AnalysisResultVM::validate()
{
    // TODO: implement validation
}

web::json::value AnalysisResultVM::toJson() const
{
    web::json::value val = this->CloudBaseVM::toJson();
    
    if(m_levelIsSet)
    {
        val[utility::conversions::to_string_t(U("level"))] = ModelBase::toJson(m_level);
    }
    if(m_detailIsSet)
    {
        val[utility::conversions::to_string_t(U("detail"))] = ModelBase::toJson(m_detail);
    }
    if(m_idIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_id);
    }
    if(m_subscriptionIdIsSet)
    {
        val[utility::conversions::to_string_t(U("subscriptionId"))] = ModelBase::toJson(m_subscriptionId);
    }
    if(m_fileIdIsSet)
    {
        val[utility::conversions::to_string_t(U("fileId"))] = ModelBase::toJson(m_fileId);
    }
    if(m_collectionNameIsSet)
    {
        val[utility::conversions::to_string_t(U("collectionName"))] = ModelBase::toJson(m_collectionName);
    }
    if(m_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_type);
    }
    if(m_signatureIsSet)
    {
        val[utility::conversions::to_string_t(U("signature"))] = ModelBase::toJson(m_signature);
    }
    if(m_newSizeIsSet)
    {
        val[utility::conversions::to_string_t(U("newSize"))] = ModelBase::toJson(m_newSize);
    }

    return val;
}

bool AnalysisResultVM::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->CloudBaseVM::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t(U("level"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("level")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ProblemLevel> refVal_setLevel;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLevel);
            setLevel(refVal_setLevel);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("detail"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("detail")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDetail;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDetail);
            setDetail(refVal_setDetail);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t(U("fileId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("fileId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFileId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFileId);
            setFileId(refVal_setFileId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("collectionName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("collectionName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCollectionName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCollectionName);
            setCollectionName(refVal_setCollectionName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("type")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ProblemType> refVal_setType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setType);
            setType(refVal_setType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("signature"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("signature")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSignature;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSignature);
            setSignature(refVal_setSignature);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("newSize"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("newSize")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setNewSize;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNewSize);
            setNewSize(refVal_setNewSize);
        }
    }
    return ok;
}

void AnalysisResultVM::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_levelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("level")), m_level));
    }
    if(m_detailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("detail")), m_detail));
    }
    if(m_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_id));
    }
    if(m_subscriptionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptionId")), m_subscriptionId));
    }
    if(m_fileIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("fileId")), m_fileId));
    }
    if(m_collectionNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("collectionName")), m_collectionName));
    }
    if(m_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_type));
    }
    if(m_signatureIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("signature")), m_signature));
    }
    if(m_newSizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("newSize")), m_newSize));
    }
    if(m_tIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("$t")), m_t));
    }
}

bool AnalysisResultVM::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("level"))))
    {
        std::shared_ptr<ProblemLevel> refVal_setLevel;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("level"))), refVal_setLevel );
        setLevel(refVal_setLevel);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("detail"))))
    {
        utility::string_t refVal_setDetail;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("detail"))), refVal_setDetail );
        setDetail(refVal_setDetail);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subscriptionId"))))
    {
        utility::string_t refVal_setSubscriptionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subscriptionId"))), refVal_setSubscriptionId );
        setSubscriptionId(refVal_setSubscriptionId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("fileId"))))
    {
        utility::string_t refVal_setFileId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("fileId"))), refVal_setFileId );
        setFileId(refVal_setFileId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("collectionName"))))
    {
        utility::string_t refVal_setCollectionName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("collectionName"))), refVal_setCollectionName );
        setCollectionName(refVal_setCollectionName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        std::shared_ptr<ProblemType> refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("signature"))))
    {
        utility::string_t refVal_setSignature;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("signature"))), refVal_setSignature );
        setSignature(refVal_setSignature);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("newSize"))))
    {
        int64_t refVal_setNewSize;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("newSize"))), refVal_setNewSize );
        setNewSize(refVal_setNewSize);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("$t"))))
    {
        utility::string_t refVal_setT;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("$t"))), refVal_setT );
        setT(refVal_setT);
    }
    return ok;
}

std::shared_ptr<ProblemLevel> AnalysisResultVM::getLevel() const
{
    return m_level;
}

void AnalysisResultVM::setLevel(const std::shared_ptr<ProblemLevel>& value)
{
    m_level = value;
    m_levelIsSet = true;
}

bool AnalysisResultVM::levelIsSet() const
{
    return m_levelIsSet;
}

void AnalysisResultVM::unsetlevel()
{
    m_levelIsSet = false;
}
utility::string_t AnalysisResultVM::getDetail() const
{
    return m_detail;
}

void AnalysisResultVM::setDetail(const utility::string_t& value)
{
    m_detail = value;
    m_detailIsSet = true;
}

bool AnalysisResultVM::detailIsSet() const
{
    return m_detailIsSet;
}

void AnalysisResultVM::unsetdetail()
{
    m_detailIsSet = false;
}
utility::string_t AnalysisResultVM::getId() const
{
    return m_id;
}

void AnalysisResultVM::setId(const utility::string_t& value)
{
    m_id = value;
    m_idIsSet = true;
}

bool AnalysisResultVM::idIsSet() const
{
    return m_idIsSet;
}

void AnalysisResultVM::unsetid()
{
    m_idIsSet = false;
}
utility::string_t AnalysisResultVM::getSubscriptionId() const
{
    return m_subscriptionId;
}

void AnalysisResultVM::setSubscriptionId(const utility::string_t& value)
{
    m_subscriptionId = value;
    m_subscriptionIdIsSet = true;
}

bool AnalysisResultVM::subscriptionIdIsSet() const
{
    return m_subscriptionIdIsSet;
}

void AnalysisResultVM::unsetsubscriptionId()
{
    m_subscriptionIdIsSet = false;
}
utility::string_t AnalysisResultVM::getFileId() const
{
    return m_fileId;
}

void AnalysisResultVM::setFileId(const utility::string_t& value)
{
    m_fileId = value;
    m_fileIdIsSet = true;
}

bool AnalysisResultVM::fileIdIsSet() const
{
    return m_fileIdIsSet;
}

void AnalysisResultVM::unsetfileId()
{
    m_fileIdIsSet = false;
}
utility::string_t AnalysisResultVM::getCollectionName() const
{
    return m_collectionName;
}

void AnalysisResultVM::setCollectionName(const utility::string_t& value)
{
    m_collectionName = value;
    m_collectionNameIsSet = true;
}

bool AnalysisResultVM::collectionNameIsSet() const
{
    return m_collectionNameIsSet;
}

void AnalysisResultVM::unsetcollectionName()
{
    m_collectionNameIsSet = false;
}
std::shared_ptr<ProblemType> AnalysisResultVM::getType() const
{
    return m_type;
}

void AnalysisResultVM::setType(const std::shared_ptr<ProblemType>& value)
{
    m_type = value;
    m_typeIsSet = true;
}

bool AnalysisResultVM::typeIsSet() const
{
    return m_typeIsSet;
}

void AnalysisResultVM::unsettype()
{
    m_typeIsSet = false;
}
utility::string_t AnalysisResultVM::getSignature() const
{
    return m_signature;
}

void AnalysisResultVM::setSignature(const utility::string_t& value)
{
    m_signature = value;
    m_signatureIsSet = true;
}

bool AnalysisResultVM::signatureIsSet() const
{
    return m_signatureIsSet;
}

void AnalysisResultVM::unsetsignature()
{
    m_signatureIsSet = false;
}
int64_t AnalysisResultVM::getNewSize() const
{
    return m_newSize;
}

void AnalysisResultVM::setNewSize(int64_t value)
{
    m_newSize = value;
    m_newSizeIsSet = true;
}

bool AnalysisResultVM::newSizeIsSet() const
{
    return m_newSizeIsSet;
}

void AnalysisResultVM::unsetnewSize()
{
    m_newSizeIsSet = false;
}
}
}
}


