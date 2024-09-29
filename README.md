![fuliginous](fuliginous.png)

# fuligin

An idiosyncratic static wiki engine / site generator (WIP).

> "Furthermore, the hue fuligin, which is darker than black, admirably erases all folds, bunchings and
> gatherings so far as the eye is concerned, showing only a featureless dark." -- Gene Wolfe, The Book of The
> New Sun

## Design philosophy

- Static site generator.
- Language details TBD. Likely Rust, Python, or C++. No or minimal dependencies.
- Data details TBD. Potentially assembled from emacs org-mode files, markdown, HTML fragments, or some custom
  format.
- Can be hosted and viewed from low-power, lower-bandwidth, air-gapped devices.
- Templating may be esoteric, but all generated output utilizes pure open web standards. No JavaScript, or
  only marginal scripts that do not break functionality on browsers with JS disabled.
- Simple, enjoyable, and calming to maintain; should be able to walk away for an extended period of time and
  come back to an immediate, fully-working project without a broken environment or dependencies etc (i.e.,
  npm).
