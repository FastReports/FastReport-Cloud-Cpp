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
 * ExportsApi.h
 *
 * 
 */

#ifndef FASTREPORT_CLOUD_CLIENT_ExportsApi_H_
#define FASTREPORT_CLOUD_CLIENT_ExportsApi_H_

#include "CloudKludge.h"
#include "../ApiClient.h"

#include "BreadcrumbsVM.h"
#include "CountVM.h"
#include "ExportFolderCreateVM.h"
#include "ExportVM.h"
#include "ExportsVM.h"
#include "FileIconVM.h"
#include "FilePermissionsVM.h"
#include "FileRenameVM.h"
#include "FileTagsUpdateVM.h"
#include "FileVM.h"
#include "FilesVM.h"
#include "FolderIconVM.h"
#include "FolderRenameVM.h"
#include "FolderTagsUpdateVM.h"
#include "ProblemDetails.h"
#include "UpdateFilePermissionsVM.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace fastreport {
namespace cloud {
namespace client {

using namespace fastreport::cloud::models;



class  ExportsApi 
{
public:

    explicit ExportsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ExportsApi();

    /// <summary>
    /// Get count of files and folders what contains in a specified folder
    /// </summary>
    /// <remarks>
    /// User with a Get Count permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    pplx::task<std::shared_ptr<CountVM>> exportFolderAndFileGetCount(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get all folders and files from specified folder
    /// </summary>
    /// <remarks>
    /// User with a Get Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    /// <param name="skip">number of folder and files, that have to be skipped (optional, default to 0)</param>
    /// <param name="take">number of folder and files, that have to be returned (optional, default to 0)</param>
    pplx::task<std::shared_ptr<FilesVM>> exportFolderAndFileGetFoldersAndFiles(
        utility::string_t id,
        boost::optional<int32_t> skip,
        boost::optional<int32_t> take
    ) const;
    /// <summary>
    /// Move folder to a specified folder
    /// </summary>
    /// <remarks>
    /// User with a Update Place permission for a folder and Create Entity  for a Parent Folder can access this method.
    /// </remarks>
    /// <param name="id">moving folder id</param>
    /// <param name="folderId">destination folder id</param>
    pplx::task<std::shared_ptr<FileVM>> exportFoldersCopyFolder(
        utility::string_t id,
        utility::string_t folderId
    ) const;
    /// <summary>
    /// Delete specified folder
    /// </summary>
    /// <remarks>
    /// User with a Delete Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    /// <param name="recursive">delete all childs (optional, default to false)</param>
    pplx::task<void> exportFoldersDeleteFolder(
        utility::string_t id,
        boost::optional<bool> recursive
    ) const;
    /// <summary>
    /// Get specified folder breadcrumbs
    /// </summary>
    /// <remarks>
    /// User with a Get Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    pplx::task<std::shared_ptr<BreadcrumbsVM>> exportFoldersGetBreadcrumbs(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get specified folder
    /// </summary>
    /// <remarks>
    /// User with a Get Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    pplx::task<std::shared_ptr<FileVM>> exportFoldersGetFolder(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get all folders from specified folder
    /// </summary>
    /// <remarks>
    /// User with a Get Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    /// <param name="skip">number of files, that have to be skipped (optional, default to 0)</param>
    /// <param name="take">number of files, that have to be returned (optional, default to 0)</param>
    pplx::task<std::shared_ptr<FilesVM>> exportFoldersGetFolders(
        utility::string_t id,
        boost::optional<int32_t> skip,
        boost::optional<int32_t> take
    ) const;
    /// <summary>
    /// Get count of folders what contains in a specified folder
    /// </summary>
    /// <remarks>
    /// User with a Get Count permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    pplx::task<std::shared_ptr<CountVM>> exportFoldersGetFoldersCount(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get all folder permissions
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<std::shared_ptr<FilePermissionsVM>> exportFoldersGetPermissions(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get user&#39;s root folder (without parents)
    /// </summary>
    /// <remarks>
    /// &amp;gt; Breakchange. Now user model doesn&#39;t contain a root folders.  This method can return error 400 and 404 when subscription is not found.
    /// </remarks>
    /// <param name="subscriptionId"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<FileVM>> exportFoldersGetRootFolder(
        boost::optional<utility::string_t> subscriptionId
    ) const;
    /// <summary>
    /// Move folder to a specified folder
    /// </summary>
    /// <remarks>
    /// User with a Update Place permission for a folder and Create Entity  for a Parent Folder can access this method.
    /// </remarks>
    /// <param name="id">moving folder id</param>
    /// <param name="folderId">destination folder id</param>
    pplx::task<std::shared_ptr<FileVM>> exportFoldersMoveFolder(
        utility::string_t id,
        utility::string_t folderId
    ) const;
    /// <summary>
    /// Create folder
    /// </summary>
    /// <remarks>
    /// User with a Create Entity permisison can access this method.
    /// </remarks>
    /// <param name="id">Identifier of parent folder id</param>
    /// <param name="folderVm">create VM (optional)</param>
    pplx::task<std::shared_ptr<FileVM>> exportFoldersPostFolder(
        utility::string_t id,
        boost::optional<std::shared_ptr<ExportFolderCreateVM>> folderVm
    ) const;
    /// <summary>
    /// Rename a folder
    /// </summary>
    /// <remarks>
    /// User with a Update Name permision can access this method.
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="nameModel"> (optional)</param>
    pplx::task<std::shared_ptr<FileVM>> exportFoldersRenameFolder(
        utility::string_t id,
        boost::optional<std::shared_ptr<FolderRenameVM>> nameModel
    ) const;
    /// <summary>
    /// Update a folder&#39;s icon
    /// </summary>
    /// <remarks>
    /// User with a Update Icon permission can access this method.
    /// </remarks>
    /// <param name="id">Identifier of folder</param>
    /// <param name="iconModel">Update icon model (optional)</param>
    pplx::task<std::shared_ptr<FileVM>> exportFoldersUpdateIcon(
        utility::string_t id,
        boost::optional<std::shared_ptr<FolderIconVM>> iconModel
    ) const;
    /// <summary>
    /// Update permissions
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="permissionsVM"> (optional)</param>
    pplx::task<void> exportFoldersUpdatePermissions(
        utility::string_t id,
        boost::optional<std::shared_ptr<UpdateFilePermissionsVM>> permissionsVM
    ) const;
    /// <summary>
    /// Update tags
    /// </summary>
    /// <remarks>
    /// User with a Update Tags permission can access this method.
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="tagsModel"> (optional)</param>
    pplx::task<std::shared_ptr<FileVM>> exportFoldersUpdateTags(
        utility::string_t id,
        boost::optional<std::shared_ptr<FolderTagsUpdateVM>> tagsModel
    ) const;
    /// <summary>
    /// Copy file to a specified folder
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">file id</param>
    /// <param name="folderId">folder id</param>
    pplx::task<std::shared_ptr<ExportVM>> exportsCopyFile(
        utility::string_t id,
        utility::string_t folderId
    ) const;
    /// <summary>
    /// Delete specified file
    /// </summary>
    /// <remarks>
    /// User with Delete permission can access the method.
    /// </remarks>
    /// <param name="id">file id</param>
    pplx::task<void> exportsDeleteFile(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get specified file
    /// </summary>
    /// <remarks>
    /// User with Get Entity permission can access this method.
    /// </remarks>
    /// <param name="id">file id</param>
    pplx::task<std::shared_ptr<ExportVM>> exportsGetFile(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get count of files what contains in a specified folder
    /// </summary>
    /// <remarks>
    /// User with Get Count permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    pplx::task<std::shared_ptr<CountVM>> exportsGetFilesCount(
        utility::string_t id
    ) const;
    /// <summary>
    /// Get all files from specified folder
    /// </summary>
    /// <remarks>
    /// User with Get Entity permission can access this method.
    /// </remarks>
    /// <param name="id">folder id</param>
    /// <param name="skip">number of files, that have to be skipped (optional, default to 0)</param>
    /// <param name="take">number of files, that have to be returned (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ExportsVM>> exportsGetFilesList(
        utility::string_t id,
        boost::optional<int32_t> skip,
        boost::optional<int32_t> take
    ) const;
    /// <summary>
    /// Get all file permissions
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<std::shared_ptr<FilePermissionsVM>> exportsGetPermissions(
        utility::string_t id
    ) const;
    /// <summary>
    /// Move file to a specified folder
    /// </summary>
    /// <remarks>
    /// User with Update Place permission can access this method.
    /// </remarks>
    /// <param name="id">file id</param>
    /// <param name="folderId">folder id</param>
    pplx::task<std::shared_ptr<ExportVM>> exportsMoveFile(
        utility::string_t id,
        utility::string_t folderId
    ) const;
    /// <summary>
    /// Rename a file
    /// </summary>
    /// <remarks>
    /// User with Update Name permission can access this method.
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="nameModel"> (optional)</param>
    pplx::task<std::shared_ptr<ExportVM>> exportsRenameFile(
        utility::string_t id,
        boost::optional<std::shared_ptr<FileRenameVM>> nameModel
    ) const;
    /// <summary>
    /// Update a files&#39;s icon
    /// </summary>
    /// <remarks>
    /// User with Update Icon permission can access this method.
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="iconModel"> (optional)</param>
    pplx::task<std::shared_ptr<ExportVM>> exportsUpdateIcon(
        utility::string_t id,
        boost::optional<std::shared_ptr<FileIconVM>> iconModel
    ) const;
    /// <summary>
    /// Update permissions
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="permissionsVM"> (optional)</param>
    pplx::task<void> exportsUpdatePermissions(
        utility::string_t id,
        boost::optional<std::shared_ptr<UpdateFilePermissionsVM>> permissionsVM
    ) const;
    /// <summary>
    /// Update tags
    /// </summary>
    /// <remarks>
    /// User with Update Tags permission can access this method.
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="tagsModel"> (optional)</param>
    pplx::task<std::shared_ptr<ExportVM>> exportsUpdateTags(
        utility::string_t id,
        boost::optional<std::shared_ptr<FileTagsUpdateVM>> tagsModel
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* FASTREPORT_CLOUD_CLIENT_ExportsApi_H_ */
