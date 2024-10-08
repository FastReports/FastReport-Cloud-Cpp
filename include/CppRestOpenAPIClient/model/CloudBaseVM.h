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
 * CloudBaseVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_CloudBaseVM_H_
#define FASTREPORT_CLOUD_MODELS_CloudBaseVM_H_

#include "CloudKludge.h"
#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  CloudBaseVM
    : public ModelBase
{
public:
    CloudBaseVM();
    virtual ~CloudBaseVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CloudBaseVM members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getT() const;
    bool TIsSet() const;
    void unsett();

    void setT(const utility::string_t& value);


protected:
    utility::string_t m_t;
    bool m_tIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_CloudBaseVM_H_ */
