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

/*
 * SubscriptionFolder.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_SubscriptionFolder_H_
#define FASTREPORT_CLOUD_MODELS_SubscriptionFolder_H_

#include "CloudKludge.h"
#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  SubscriptionFolder
    : public ModelBase
{
public:
    SubscriptionFolder();
    virtual ~SubscriptionFolder();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SubscriptionFolder members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFolderId() const;
    bool folderIdIsSet() const;
    void unsetfolderId();

    void setFolderId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getBytesUsed() const;
    bool bytesUsedIsSet() const;
    void unsetbytesUsed();

    void setBytesUsed(int64_t value);


protected:
    utility::string_t m_folderId;
    bool m_folderIdIsSet;
    int64_t m_bytesUsed;
    bool m_bytesUsedIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_SubscriptionFolder_H_ */