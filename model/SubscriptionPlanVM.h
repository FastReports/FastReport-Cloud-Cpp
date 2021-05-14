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
 * SubscriptionPlanVM.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_MODELS_SubscriptionPlanVM_H_
#define FASTREPORT_CLOUD_MODELS_SubscriptionPlanVM_H_

#include "CloudKludge.h"
#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace fastreport {
namespace cloud {
namespace models {


/// <summary>
/// 
/// </summary>
class  SubscriptionPlanVM
    : public ModelBase
{
public:
    SubscriptionPlanVM();
    virtual ~SubscriptionPlanVM();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SubscriptionPlanVM members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetid();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isIsActive() const;
    bool isActiveIsSet() const;
    void unsetisActive();

    void setIsActive(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();

    void setDisplayName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTimePeriodType() const;
    bool timePeriodTypeIsSet() const;
    void unsettimePeriodType();

    void setTimePeriodType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getTimePeriod() const;
    bool timePeriodIsSet() const;
    void unsettimePeriod();

    void setTimePeriod(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getReadonlyTimeLimitType() const;
    bool readonlyTimeLimitTypeIsSet() const;
    void unsetreadonlyTimeLimitType();

    void setReadonlyTimeLimitType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getReadonlyTimeLimit() const;
    bool readonlyTimeLimitIsSet() const;
    void unsetreadonlyTimeLimit();

    void setReadonlyTimeLimit(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getTemplatesSpaceLimit() const;
    bool templatesSpaceLimitIsSet() const;
    void unsettemplatesSpaceLimit();

    void setTemplatesSpaceLimit(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getReportsSpaceLimit() const;
    bool reportsSpaceLimitIsSet() const;
    void unsetreportsSpaceLimit();

    void setReportsSpaceLimit(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getExportsSpaceLimit() const;
    bool exportsSpaceLimitIsSet() const;
    void unsetexportsSpaceLimit();

    void setExportsSpaceLimit(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getFileUploadSizeLimit() const;
    bool fileUploadSizeLimitIsSet() const;
    void unsetfileUploadSizeLimit();

    void setFileUploadSizeLimit(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getDataSourceLimit() const;
    bool dataSourceLimitIsSet() const;
    void unsetdataSourceLimit();

    void setDataSourceLimit(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getMaxUsersCount() const;
    bool maxUsersCountIsSet() const;
    void unsetmaxUsersCount();

    void setMaxUsersCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    bool isHasSpaceOverdraft() const;
    bool hasSpaceOverdraftIsSet() const;
    void unsethasSpaceOverdraft();

    void setHasSpaceOverdraft(bool value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getGroupLimit() const;
    bool groupLimitIsSet() const;
    void unsetgroupLimit();

    void setGroupLimit(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    bool isOnlineDesigner() const;
    bool onlineDesignerIsSet() const;
    void unsetonlineDesigner();

    void setOnlineDesigner(bool value);

    /// <summary>
    /// 
    /// </summary>
    bool isIsDemo() const;
    bool isDemoIsSet() const;
    void unsetisDemo();

    void setIsDemo(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUrlToBuy() const;
    bool urlToBuyIsSet() const;
    void unseturlToBuy();

    void setUrlToBuy(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isUnlimitedPage() const;
    bool unlimitedPageIsSet() const;
    void unsetunlimitedPage();

    void setUnlimitedPage(bool value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getPageLimit() const;
    bool pageLimitIsSet() const;
    void unsetpageLimit();

    void setPageLimit(int32_t value);


protected:
    utility::string_t m_id;
    bool m_idIsSet;
    bool m_isActive;
    bool m_isActiveIsSet;
    utility::string_t m_displayName;
    bool m_displayNameIsSet;
    utility::string_t m_timePeriodType;
    bool m_timePeriodTypeIsSet;
    int32_t m_timePeriod;
    bool m_timePeriodIsSet;
    utility::string_t m_readonlyTimeLimitType;
    bool m_readonlyTimeLimitTypeIsSet;
    int32_t m_readonlyTimeLimit;
    bool m_readonlyTimeLimitIsSet;
    int64_t m_templatesSpaceLimit;
    bool m_templatesSpaceLimitIsSet;
    int64_t m_reportsSpaceLimit;
    bool m_reportsSpaceLimitIsSet;
    int64_t m_exportsSpaceLimit;
    bool m_exportsSpaceLimitIsSet;
    int64_t m_fileUploadSizeLimit;
    bool m_fileUploadSizeLimitIsSet;
    int32_t m_dataSourceLimit;
    bool m_dataSourceLimitIsSet;
    int32_t m_maxUsersCount;
    bool m_maxUsersCountIsSet;
    bool m_hasSpaceOverdraft;
    bool m_hasSpaceOverdraftIsSet;
    int32_t m_groupLimit;
    bool m_groupLimitIsSet;
    bool m_onlineDesigner;
    bool m_onlineDesignerIsSet;
    bool m_isDemo;
    bool m_isDemoIsSet;
    utility::string_t m_urlToBuy;
    bool m_urlToBuyIsSet;
    bool m_unlimitedPage;
    bool m_unlimitedPageIsSet;
    int32_t m_pageLimit;
    bool m_pageLimitIsSet;
};


}
}
}

#endif /* FASTREPORT_CLOUD_MODELS_SubscriptionPlanVM_H_ */
