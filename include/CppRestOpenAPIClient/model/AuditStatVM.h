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

/*
 * AuditStatVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_AuditStatVM_H_
#define FASTREPORT_CLOUD_MODELS_AuditStatVM_H_


#include <cpprest/details/basic_types.h>
#include "CppRestOpenAPIClient/model/CloudBaseVM.h"
#include "CppRestOpenAPIClient/model/AuditType.h"

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  AuditStatVM
    : public CloudBaseVM
{
public:
    AuditStatVM();
    virtual ~AuditStatVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AuditStatVM members

    /// <summary>
    /// 
    /// </summary>
    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();

    void setCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<AuditType> getType() const;
    bool typeIsSet() const;
    void unsettype();

    void setType(const std::shared_ptr<AuditType>& value);


protected:
    int32_t m_count;
    bool m_countIsSet;
    std::shared_ptr<AuditType> m_type;
    bool m_typeIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_AuditStatVM_H_ */