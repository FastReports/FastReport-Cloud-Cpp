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
 * ProblemDetails.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_ProblemDetails_H_
#define FASTREPORT_CLOUD_MODELS_ProblemDetails_H_

#include "CloudKludge.h"
#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"
#include <map>

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  ProblemDetails
    : public ModelBase
{
public:
    ProblemDetails();
    virtual ~ProblemDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ProblemDetails members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsettype();

    void setType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTitle() const;
    bool titleIsSet() const;
    void unsettitle();

    void setTitle(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();

    void setStatus(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDetail() const;
    bool detailIsSet() const;
    void unsetdetail();

    void setDetail(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();

    void setInstance(const utility::string_t& value);


protected:
    utility::string_t m_type;
    bool m_typeIsSet;
    utility::string_t m_title;
    bool m_titleIsSet;
    int32_t m_status;
    bool m_statusIsSet;
    utility::string_t m_detail;
    bool m_detailIsSet;
    utility::string_t m_instance;
    bool m_instanceIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_ProblemDetails_H_ */
