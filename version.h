#ifndef _VGMSTREAM_VERSION_H_
#define _VGMSTREAM_VERSION_H_
/* vgmstream version config (auto/static) */
/* Current version is usually autogenerated from Git (passed via compiler args, or updated with scripts),
 * but this file also defines a static version for Git-less builds to be used by default. */

/* autogenerated version passed by param */
//todo detect if VGMSTREAM_VERSION is "" (may happen on script error)
#ifndef VGMSTREAM_VERSION
/* autogenerated version in another file */
#ifdef VGMSTREAM_VERSION_AUTO
#include "version_auto.h"
#else
/* static/fallback version */

/* Generating new releases:
 * - calculate new version
 *   - check last release's latest PR
 *   - count number of PRs (more or less) since then
 *   - add that count to current version (commit count not used since there are a lot and some are useless)
 * - update VGMSTREAM_VERSION "rNNNN" and commit
 *   - may be done directly without PR
 * - create a new release/tag (same name as version, rNNNN), with that commit as a base
 *   - use latest if version change commit was without PR
 * - compile and upload
 *   - on github, after changing version:
 *     - releases > "draft new release" button
 *     - copy text from prev release and select commit + tag
 *       - tweak current PR
 *       - copy "recent changes" from vgmstream-releases
 *     - publish (even with no binaries) 
 *     - in "actions" tab, workflow should have added a new "rXXXX" compilation
 *     - once done download all binaries there, edit release, upload, save
 * - if version commit was used as release base, "git describe" and plugin
 *   versions should return "rNNNN" without extra text commit number text
 */

#define VGMSTREAM_VERSION "r2023"

#endif
#endif

#endif
